const mongoose = require("mongoose");
//schema
const OwnedSkin = new mongoose.Schema({
  userName: {
    type: String,
    required: true,
  },

  skinId: {
    type: Number,
    required: true,
  },
});

module.exports = mongoose.model("OwnedSkin", OwnedSkin);
