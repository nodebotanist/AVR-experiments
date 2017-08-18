#! /usr/bin/env node

const argv = require('yargs').argv
const async = require('async')
const usbtinyisp = require('avrgirl-usbtinyisp')
const chips = require('avrgirl-chips-json')

const chip = chips[argv.chip] // ADD ERROR CONDITION

const avrgirl = new usbtinyisp({
	debug: true, 
	chip: chips[argv.chip], 
	programmer: argv.programmer
});

avrgirl.on('ready', function() {
  // upload a program to flash memory
  async.series([
    avrgirl.enterProgrammingMode.bind(avrgirl),
    avrgirl.writeFlash.bind(avrgirl, argv.file),
    avrgirl.exitProgrammingMode.bind(avrgirl)
    ], function (error) {
      console.log('err', error);
      avrgirl.close();
    }
  );
});

