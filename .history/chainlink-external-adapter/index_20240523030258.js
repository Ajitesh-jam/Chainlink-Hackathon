const express = require("express");
const bodyParser = require("body-parser");
const axios = require("axios");

const app = express();
app.use(bodyParser.json());

app.post("/", async (req, res) => {
  const { id, data } = req.body;
  const { username } = data;

  try {
    const response = await axios.get(`http://localhost:5001/${username}/Skin`);
    res.json({
      jobRunID: id,
      data: response.data,
      status: "completed",
    });
  } catch (error) {
    res.status(500).json({
      jobRunID: id,
      status: "errored",
      error: error.message,
    });
  }
});

const PORT = process.env.PORT || 8080;
app.listen(PORT, () =>
  console.log(`External adapter listening on port ${PORT}`)
);
