/**
 * @format
 */

import {AppRegistry} from 'react-native';
import App from './App';
import {name as appName} from './app.json';
//これは必須。
import 'react-native-winrt'


AppRegistry.registerComponent(appName, () => App);
