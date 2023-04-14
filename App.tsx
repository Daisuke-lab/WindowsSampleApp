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

import {showNotification} from "./Notifications"

function App(): JSX.Element {


  const test = () => {
    console.log("you are in test")
    showNotification({
      template: Windows.UI.Notifications.ToastTemplateType.toastImageAndText01,
      text: "hello world",
      image: {
        src: "https://microsoft.github.io/react-native-windows/img/header_logo.svg",
        alt: "React logo",
      },
    });
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

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
  },
  highlight: {
    fontWeight: '700',
  },
});

export default App;
