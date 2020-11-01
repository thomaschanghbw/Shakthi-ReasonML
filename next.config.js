const withTM = require('next-transpile-modules')(['bs-platform', 'three']);

module.exports = withTM({
  pageExtensions: ['jsx', 'js', 'bs.js']
});