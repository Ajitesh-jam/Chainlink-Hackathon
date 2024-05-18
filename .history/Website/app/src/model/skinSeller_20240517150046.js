const mongoose = require("mongoose");
//schema
const skinSeller = new mongoose.Schema({
  userName: {
    type: String,
    required: true,
  },

  skinId: {
    type: Number,
    required: true,
  },

  price: {
    type: Number,
    required: true,
  },
  amount: {
    type: Number,
    required: true,
  },
});

module.exports = mongoose.model("SkinSeller", skinSeller);
