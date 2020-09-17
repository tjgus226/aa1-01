// app.js
var express = require("express");
var app = express();
var port = 3000;

app.get("/", function (req, res) {
  res.send('<a href="/hello">Hello Page</a>');
});

app.get("/hello", function (req, res) {
  res.send("Hello aa01!");
});

app.get("/comsi", function (req, res) {
  res.send("Hello Comsi!");
});

app.get("/aa03", function (req, res) {
  res.send("Hello aa01, Comsi! My first express server!!!");
});

app.get("/naver", function (req, res) {
  res.send('<a href="http://www.naver.com">Go to naver</a>');
});

// listening requests from clients
var server = app.listen(port, function () {
  console.log("Listening on port %d", server.address().port);
});
