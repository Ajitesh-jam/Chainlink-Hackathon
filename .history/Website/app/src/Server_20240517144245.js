//Skin store hoga with
//skin id -

const express = require("express");
const mongoose = require("mongoose");

const jwt = require("jsonwebtoken");
const app = express();
const http = require("http"); // Require http module for creating server
const User = require("./model/userModel");

const bcrypt = require("bcrypt");

const cors = require("cors");
app.use(cors());
// const userRouter = require("./routes/user.route.js");

//route
//app.use("/users", userRouter);

// Middleware for parsing JSON bodies
app.use(express.json());
app.use(express.urlencoded({ extended: false }));

// MongoDB Connection
mongoose
  .connect(
    "mongodb+srv://Ajitesh:Ajitesh9877@cluster0.yz6u5fv.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0"
  )
  .then(() => {
    console.log("MongoDB Connected");
  })
  .catch((err) => {
    console.error("MongoDB Connection Error:", err);
  });

// Create HTTP server
const server = http.createServer(app);

// Start listening on port 3000
server.listen(5000, () => {
  console.log("Server listening on port 5000");
});
// async function insert() {
//   await User.create({
//     Name: "Ajitesh2",
//     Password: "Ajitesh999",
//   });
//   await User.create({
//     Name: "Ajitesh3",
//     Password: "Ajitesh999",
//   });
// }
// Define routes
app.post("/users/signUp", async (req, res) => {
  try {
    // const {Name,Password}=req.body;
    // const encryptedPassword=await bcrypt.hash(password,10);

    const newUser = await User.create(req.body);
    await newUser.save();
    res.status(201).json(newUser);
  } catch (err) {
    console.error(err);
    res.status(500).json({ message: "Server Error" });
  }
});

app.get("/users", async (req, res) => {
  try {
    const users = await User.find();
    res.json(users);

    users.map((user) => {
      if (user.Name === "Ajitesh2") console.log(user.Password);
    });
  } catch (err) {
    console.error(err);
    res.status(400).json({ message: "Server Error" });
  }
});
app.get("/users/:id", async (req, res) => {
  try {
    const user = await User.findById(req.params.id);
    if (!user) {
      return res.status(404).json({ message: "User not found" });
    }
    res.send(user);

    // const { id } = req.params;
    // await User.findById(id);
    // res.send(user);
  } catch (err) {
    console.log(err);
    res.status(500).json({ message: err.message });
  }
});
app.put("/users/:id", async (req, res) => {
  try {
    const user = await User.findByIdAndUpdate(req.params.id, req.body);
    !user
      ? res.status(404).json({ message: "User not found" })
      : res.status(200).json(user);

    const updatedUser = await User.findById(user.id);
    res.send(updatedUser);
  } catch (e) {
    res.status(500).json({ message: e.message });
  }
});
app.delete("/users/:id", async (req, res) => {
  try {
    const user = await User.findByIdAndDelete(req.params.id);
    !user
      ? res.status(404).json({ message: "User not found" })
      : res.status(200).json(user);
  } catch (e) {
    res.status(500).json({ message: e.message });
  }
});

app.post("/users/login", async (req, res) => {
  const { Name, Password } = req.body;
  const user = await User.findOne({ Name });
  if (!user) {
    return res.status(404).json({ message: "User not found" });
  }
  console.log(user.Password, Password);
  // const isPasswordCorrect = await user.comparePassword(Password);

  if (user.Password === Password) {
    // Passwords match
    return res.status(200).json({ status: "correct Password", id: user.id });
  } else {
    // Passwords do not match
    return res.status(400).json({ status: "incorrect Password" });
  }
});

let StudentId;
app.param("Studentid", async (req, res, next, Studentid) => {
  try {
    const student = await User.findById(id);
    if (!student) return res.status(404).json({ message: "Student not found" });
    StudentId = Studentid;
    req.student = student;
    next();
  } catch (err) {
    console.error(err);
    res.status(500).json({ message: "Server Error" });
  }
});

//company
const Company = require("./model/companyModel.js");

app.get("/company", async (req, res) => {
  try {
    const companies = await Company.find();
    res.json(companies);
  } catch (err) {
    console.error(err);
    res.status(500).json({ message: "Server Error" });
  }
});

app.post("/companies", async (req, res) => {
  try {
    const newCompany = new Company(req.body);
    await newCompany.save();
    res.status(201).json(newCompany);
  } catch (err) {
    console.error(err);
    res.status(500).json({ message: "Server Error" });
  }
});

// let companyId;
// app.param("id", async (req, res, next, id) => {
//   try {
//     const company = await Company.findById(id);
//     if (!company) return res.status(404).json({ message: "Company not found" });
//     companyId = id;
//     req.company = company;
//     next();
//   } catch (err) {
//     console.error(err);
//     res.status(500).json({ message: "Server Error" });
//   }
// });

app.get("/company/:id", async (req, res) => {
  try {
    const user = await Company.findById(req.params.id);
    if (!user) {
      return res.status(404).json({ message: "User not found" });
    }
    res.send(user);

    // const { id } = req.params;
    // await User.findById(id);
    // res.send(user);
  } catch (err) {
    console.log(err);
    res.status(500).json({ message: err.message });
  }
});

// Update a specific company by its ID
app.patch("/company/:id", async (req, res) => {
  try {
    const company = req.company;
    company.set(req.body);
    await company.save();
    res.json(company);
  } catch (err) {
    console.error(err);
    res.status(500).json({ message: "Server Error" });
  }
});

// Delete a specific company by its ID
app.delete("/company/:id", async (req, res) => {
  try {
    const company = req.company;
    await company.remove();
    res.json(company);
  } catch (err) {
    console.error(err);
    res.status(500).json({ message: "Server Error" });
  }
});

app.post("/company/login", async (req, res) => {
  const { Name, Password } = req.body;
  const company = await Company.findOne({ Name });
  if (!company) {
    return res.status(404).json({ message: "User not found" });
  }

  if (company.Password === Password) {
    // Passwords match
    return res.status(200).json({ status: "correct Password", id: company.id });
  } else {
    // Passwords do not match
    return res.status(400).json({ status: "incorrect Password" });
  }
});
// --------------------------------------------------------
