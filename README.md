# 18w-hikar-frontend
Repository for HikAR Unity Frontend

HikAR is a hiking-focused navigation app that utilizes AR technology to effectively guide the user on their outdoor adventure.

## Architecture

Vuforia SDK (version 7.35) -- Used for AR overlay

Mapbox SDK (version 1.4) -- Used for topographic map generation as well as retrieving elevation data

Overpass Turbo -- Used to query OpenStreetMaps for trail information which is then stored in our backend

## Setup

1. Download the project and open in Unity (2018.1f)
2. Perform a test build by running the project in the Unity editor (your webcam should turn on and a map of Hanover, NH should be rendered)


## Deployment

1. Download the Unity project and open in Unity
2. Go to File -> Build -> Build Settings and choose the mobile platform you want to deploy to (iOS or Android)

    *For Android*: You will need to [download and setup the Android SDK for Unity](https://docs.unity3d.com/Manual/android-sdksetup.html)
3. Select Build and Run with your mobile device connected
4. For iOS, the app should open in Xcode and install on your phone. Make sure you have the correct signing certificates.
   
   For Android, the app will be built into an .apk file which you can transfer to your phone using ADB and the command `adb install <path_to_apk>`
5. Make sure to enable location services and camera permissions on startup. If you don't have an account, enter your desired credentials and press the [Sign Up] button on the log-in view.

## Authors

Joshua Thomas

James Wang

Gregory Hunter

Raunak Bhojwani

Johnny Brady

Dami Apoeso

## Demonstration
https://imgur.com/gallery/h2Wrc
