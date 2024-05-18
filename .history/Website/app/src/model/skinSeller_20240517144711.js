const mongoose = require("mongoose");
//schema
const skinSeller = new mongoose.Schema({
  userName: {
    type: String,
    required: true,
  },

  skinId: {
    type: int,
    required: true,
  },

  price: {
    type: int,
    required: true,
  },
});

module.exports = mongoose.model("skinSeller", skinSeller);
