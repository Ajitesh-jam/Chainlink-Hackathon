const mongoose = require("mongoose");

// Define the schema for the OwnedSkin collection
const OwnedSkinSchema = new mongoose.Schema({
  userName: {
    type: String,
    required: true,
  },
  skinId: {
    type: [Number], // Define skinId as an array of numbers
    required: true,
  },
});

// Create a Mongoose model from the schema
const OwnedSkin = mongoose.model("ownedSkin", OwnedSkinSchema);

// Export the model
module.exports = OwnedSkin;
