// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';


function videoGameToJs(param) {
  return {
          id: param[/* id */0],
          title: param[/* title */1],
          developer: param[/* developer */2],
          completed: param[/* completed */3]
        };
}

function videoGameFromJs(param) {
  return /* record */[
          /* id */param.id,
          /* title */param.title,
          /* developer */param.developer,
          /* completed */param.completed
        ];
}

exports.videoGameToJs = videoGameToJs;
exports.videoGameFromJs = videoGameFromJs;
/* No side effect */
