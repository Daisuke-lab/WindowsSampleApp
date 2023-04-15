/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import React from 'react';
import type {PropsWithChildren} from 'react';
import {
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
} from 'react-native';

import {
  Colors,
  DebugInstructions,
  Header,
  LearnMoreLinks,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';
import { Pressable } from "react-native";
import runProcess from './Process';
import {showNotification} from "./Notifications"

function App(): JSX.Element {


  const test = () => {
    console.log("you are in test")
    runProcess()
  }
  return (
    <SafeAreaView style={Colors.darker}>
      <Text>this is test</Text>
     <Pressable
  onPress={test}
><Text>Click here</Text></Pressable>
<Text>this is end</Text>
    </SafeAreaView>
  );
}


export default App;
