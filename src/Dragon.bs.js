// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';


function dragonToJs(param) {
  return {
          id: param[/* id */0],
          name: param[/* name */1],
          species: param[/* species */2],
          breed: param[/* breed */3]
        };
}

function dragonFromJs(param) {
  return /* record */[
          /* id */param.id,
          /* name */param.name,
          /* species */param.species,
          /* breed */param.breed
        ];
}

exports.dragonToJs = dragonToJs;
exports.dragonFromJs = dragonFromJs;
/* No side effect */