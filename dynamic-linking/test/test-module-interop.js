'use strict'
let n = require('./Name.js')({});

let greeters = {};

let addGreeter = (name) => {
  n.Runtime.loadDynamicLibrary(name + '.js');
  greeters[name] = n.createGreeter(n.ccall('create' + name, 'number', []));
}

let dynamicLibraries = ['InitialedGreeter', 'FullNameGreeter'];

var me = new n.Name('Lucas', 'Thompson');

dynamicLibraries.forEach((library) => {
  addGreeter(library);
  console.log(greeters[library].greet(me));
  greeters[library].delete();
});

