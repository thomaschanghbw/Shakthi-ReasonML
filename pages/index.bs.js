// Generated by ReScript, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Home$MyBlog = require("../src/components/Home.bs.js");
var Page$MyBlog = require("../src/components/Page.bs.js");

function Index(Props) {
  React.useState(function () {
        return false;
      });
  return React.createElement(Page$MyBlog.make, {
              children: React.createElement("div", {
                    className: "flex items-center justify-center h-screen w-full"
                  }, React.createElement(Home$MyBlog.make, {}))
            });
}

var make = Index;

var $$default = Index;

exports.make = make;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
/* react Not a pure module */
