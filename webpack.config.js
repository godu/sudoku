const {join} = require('path');
const {HotModuleReplacementPlugin} = require('webpack');

const isProd = process.env.NODE_ENV === 'production';

module.exports = {
  entry: {
    "app": join(__dirname, 'src', 'main.bs.js')
  },
  mode: isProd ? 'production' : 'development',
  output: {
    path: join(__dirname, "dist"),
    filename: '[name].js',
    publicPath: '/dist/'
  },
  devServer: {
    // publicPath: '/dist/',
    hot: true
  },
  plugins: [
    new HotModuleReplacementPlugin()
  ]
};
