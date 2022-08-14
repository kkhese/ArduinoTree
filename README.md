


# *Arduino Uno R3 Project*
![Title Image](https://github.com/kkhese/ArduinoTree/blob/main/Images/Title.png?raw=true)

HTP: House, Tree, Person

# Version Information

This application is Beta Version which includes only diagnostic descriptions to help therapists interpret client's drawings:  this psychoanalysis application is for reference only and may need different interpretations depending on the client's disposition or environment.
- App does not support to save client information.
- App does not generate diagnosis reports.
- Basic background knowledge of HTP is required to fully utilize this application. 
- Built-in tutorial exists in the application explaining briefly how to use this application.
- Language: English Only
	- Korean(한국어) version to be supported soon


# Table of Contents
- [Top of Screen](#beta-version)
- [Version Information](#version-information)
- [Table of Contents](#table-of-contents)
- [Motivation](#motivation)
	- [Purpose](#purpose)
	- [Data Structure](#data-structure)
	- [Intended Users](#intended-users)
- [How to Run](#how-to-run)
    - [System & Software Requirement](#system--software-requirement)
    - [Ready to Run Guide](#ready-to-run-guide)
- [How to Use](#how-to-use)
- [Application Features and Functions](#application-features-and-functions)
	- [List of Files](#list-of-files)
	- [File Map](#file-map)
	- [Feature List with Functions](#feature-list-with-functions)
		- [1. Home Screen](#home-screen)
		- [2. Tutorial Screen](#tutorial-screen)
		- [3. Home to Main Category](#home-to-main-category)
		- [4. House Tree Person Screen](#house-tree-person-screen)
		- [5. Detail Screen](#detail-screen)
	- [Copyright Information](#copyright-information)
		- [Contact Information](#contact-information)
		- [Tfelypoc](#tfelypoc)
		- [Reference](#reference)
		- [A Link for Downloaded Images](#a-link-for-downloaded-images)
	- [Acknowledgement](#acknowledgement)
	- [Bug List](#bug-list)
	

# Motivation

## Purpose 
HTP(House, Tree, Person) test is non-verbal psychological test which is part of art therapy. It allows in-depth psychological diagnosis since the therapist is able to see client's unconscious world beyond language expression through the picture of his or her house, tree, and person drawings. Because each part of the drawing abstractly depicts the human unconscious, examining and interpreting every part of drawings requires high-level skill and a lot of experience. The HTP-related contents are vast and unsystematic, so counselors cannot easily learn and use them. This app has been developed so that the counselor can easily see the necessary information by dividing the essential HTP related contents into three main categories. 

## Data Structure
The contents of art therapy book [1] were summarized with my own expression.
- Main categories: House, Tree, Person
- Sub-categories: six for each main category
	- House	: Chimney, Roof, Stair/Path, Door, Window, Wall
	- Tree		: Title, Crown, Leaf, Branch, Trunk, Roof
	- Person	: Head, Mouth/Nose/Eye, Arm, Face/Neck, ETC, Leg
- Each sub-category has from 2 to 4 detailed categories.
- The details for Diagnosis aid will be displayed once detailed category is selected.

The below is data structure diagram. This diagram was more clearly depicted and explained at [File Map](#file-map) section.
![Data Tree](https://github.com/kkhese/HTPFin/blob/master/Images/DataStructure.jpg?raw=true)

## Intended Users
 If users need to use this application for practical HTP diagnosis, it is highly recommended to go through the tutorial at the home screen. Otherwise user can simply navigate the contents of application for obtaining required information about HTP diagnosis.
 - Professionals: Psychoanalyst, Art therapist, 
 - Amateur: Counselor or student learning HTP
 - Third-party: general public with a strong interest in HTP test


# How to Run

## System & Software Requirement
 - The application fully operates only at Android device: Version 10.0 or higher version is highly recommended.
 - The application might work on iOS, but not guaranteed.
 - The application works at the web, but the screen composition is not good for wide screen.
 - It is necessary to run at EXPO. See next section for learning how to run this application

## Ready to Run Guide
This beta version has no extraction file for installation. You should import gitHub files at EXPO and run with QR code .
1. Go to expo homepage https://expo.dev/, and sign up.
2. Log-in to expo.
3. Click 'Snacks' and then '+New Snack' button. See below image![Ready to Run 01](https://github.com/kkhese/HTPFin/blob/master/Images/HowtoUse1.png?raw=true)
4. New snack will be created with random name and default files
5. Follow the below image instruction to import files for the application. Type in https://github.com/kkhese/HTPFin.git into Git URL textbox.![Ready to Run 02](https://github.com/kkhese/HTPFin/blob/master/Images/HowtoUse2.png?raw=true)
6. After the files are imported, you should update several times, and add several dependencies. Even after updating and adding everything, there is still module error for gesture handler. This problem can be solved by switching expo version from v42.0.0 to v43.0.0. Follow below image instruction.![Ready to Run 03](https://github.com/kkhese/HTPFin/blob/master/Images/HowtoUse3.png?raw=true)
7. Now you can see QR code on the right side of your screen as blow image. To launch the application at your mobile phone, you should download Expo Go at Android play store. After the download, if you install and run Expo Go, you can scan QR code. Then, you will see the home screen for HTP diagnosis Aid application.![Ready to Run 04](https://github.com/kkhese/HTPFin/blob/master/Images/HowtoUse4.png?raw=true)
8. Now, All setups are ready to use the application.


# How to Use

These is a built-in tutorial for user. If you click 'HOW TO USE -|- APP TUTORIAL' button on the top of main page. The application will navigate to tutorial page. This is click-and-destroy tutorial having seven stages. Stages are displayed at the middle of window. If you click the stage, clicked stage will be disappeared and go to the next stage. You can skip the stage but cannot go back one stage back. You can only reset the tutorial stage by clicking 'RESET TUTORIAL' button at the bottom of screen. If you click the last stage, it will show congratulations! page. The details about features and functions were explained at next section,  [Feature List](#feature-list) .
![How to Use](https://github.com/kkhese/HTPFin/blob/master/Images/HowtoUse5.png?raw=true)


# Application Features and Functions

## List of Files

- The diagnosis interpretations for the house pictures are in the house folder, the interpretations for the tree pictures are in the tree folder, and the interpretation for the person pictures are in the person folder.

```
- App.js ---------> Top file for the application showing all navigation pages
- README.md ------> This is the file users should read for installing and using
-------------------------------------------------------------------------------
- assets ---------> Image folder for image files used in the applicatoin
- ./House --------> Folder for Hand-drawn images of House category
- ./Peron --------> Folder for Hand-drawn images of Person category
- ./Tree  --------> Folder for Hand-drawn images of Tree category
-------------------------------------------------------------------------------
- Components -----> Folder for all the sub-files for this application
- -HomeScreen.js -> The file for main home screen
- -House.js ------> Main Category(House) file
- -Items.js ------> Item manage file for toDolist used in Tutorial.js <= From CS 855 lecture
- -Person.js -----> Main Category(Pers애ㅐㄱon) file
- -Tree.js -------> Main Category(Tree) file
- -Tutorial.js ---> The file for tutorial of this app
- ./House --------> Folder for 6 files composing House sub-categories and their details
- -- {Chimney.js, 	Door.js, 	Roof.js, 	Stair.js, 	Wall.js, 	Window.js}
- ./Person -------> Folder for 6 files composing Person sub-categories and their details
- -- {Arm.js, 		EENM.js, 	ETC.js, 	Face.js, 	Head.js, 	Leg.js}
- ./Tree ---------> Folder for 6 files composing Tree sub-categories and their details
- -- {Branch.js,	Crown.js,	Leaf.js, 	Root.js, 	Title.js	Trunk.js}
--------------------------------------------------------------------------------
- Images ---------> Images for README.md file
```

## File Map
Since the main function of this application is to navigate along the information tree, it is easier for users to understand the file information in the form of a map than in the form of a list. A detailed description of the HTP diagnostics is contained within .js files in the lowest level structure.
![enter image description here](https://github.com/kkhese/HTPFin/blob/master/Images/FileMap.png?raw=true)


## Feature List with Functions

### 1. Home Screen
This is the main page(HomeScreen.js) You can access to the main category (Tree) page or Tutorial.
- Animation: Image opacity slowly increases at the beginning
- Two Buttons
	- Top button: Navigate to Tutorial screen
	- Bottom Button: Navigate to main category(Tree) screen
	
 ![Home Screen](https://github.com/kkhese/HTPFin/blob/master/Images/HomeScreen.png?raw=true)

### 2. Tutorial Screen
This page is for quick tutorial for the application. There are 7 stages for tutorial. It does not allow stepping back to previous stage. The whole stage can be reset by the bottom button. User cannot skip whole stages at once but after 3-4 stages for 'congratulations'.

- Navigation is used for screen change
- To do list is used (Modified from CS 855 Lecture code)
- Two buttons
	- Navigation 'Back' button at the top: Navigate back to home screen
	- 'RESET TUTORIAL' button at the bottom: Reset tutorial stage
- Background Image will be rolled up while clearing the stage

![Tutorial](https://github.com/kkhese/HTPFin/blob/master/Images/Tutorial.png?raw=true)

### 3.  Home to Main Category
Home screen has animations. House, Tree, Person images will fade-in at the beginning. If bottom button is clicked, those images will fly away to left and rights with slightly different timing. Main category for 'tree' will appear after those images are gone.

-  Animation: transform to X-axis only.
-  Timing control for home to main change to wait for animations
-  Navigation from home to tree screen

![HometoTree](https://github.com/kkhese/HTPFin/blob/master/Images/Home2Main.png?raw=true)

### 4. House Tree Person Screen
House, Tree, Person, these 3 screens are main category screens. Image of each screen was divided by 6 sub-category images. All images are relative with screen width. Thus, it is very flexible with any screen sizes. 

- Navigation was used. Navigator head was used for location marker. 
- Six images were combined as one image for each 3 main category by using flex function carefully
- Six images are touchable and those touchable images with words are the buttons for accessing to sub-categories.
	- Chimney, Roof, Star/Path, Door, Window, Wall			<-- House
	- Title, Crown, Leaf, Branch, Trunk, Root						<-- Tree
	- Head, Mouth/Nose/Eye, Arm, Face/Neck, ETC, Leg	<-- Person
- Gesture handler was used at the bottom white bar for detecting swiping actions.
	- Person	<=	House		=>	Tree
	- House	<= 	Tree			=>	Person
	- Tree		<=	Person	=>	House
	- Bottom swiping window shows future screen both with letters and colors.
		- House	: pink
		- Tree		: green
		- Person	: yellow		

![Main](https://github.com/kkhese/HTPFin/blob/master/Images/Main.png?raw=true)

### 5. Detail Screen
If you click any sub-category of any main category, it will navigate to detailed category screen. There is no further sub-screens. There are 2-4 detailed categories for each sub-category. If you click detailed category from the top scrollable window(horizontal), detailed diagnosis will be displayed depending on which one you chose. Middle window is vertically scrollable for long descriptions. Finally, users can find what they need on the middle window. Swiping window is still at the bottom screen, which allow you to move to another main category directly and easily without clicking back button at the top.

- Navigation is used.
- Main category switching is still available by swiping left and right.
- Images for detailed category was hand-drawn so it can be similar to client's drawings
- Detailed category window is at the top of screen.
	- There are 2-4 detailed image categories.
		- Image width was determined by screen width, so there are always 2 images at once at the top.
		- Detailed category window is horizontal scroll screen. If there are more than 2 images, user need to scroll to check and select extra detailed categories.

![Detail](https://github.com/kkhese/HTPFin/blob/master/Images/Detail.png?raw=true)


# Copyright Information

## Contact Information
Please send me an e-mail if needed:		hkq118@uregina.ca

## Tfelypoc
This app is fee to copy, edit or distribute.

## Reference

* [1] 신동열, 한상희, *상담심리치료장면에서 쓴 미술심리치료: 이론과 실제.* 양서원, 2016.
Dongyul Shin, Sanghui Han, *Art Therapy: Theory and Application*, Yangseowon, 2016.

## A link for downloaded Images
Illustration images that were not hand-drawn were downloaded at pixabay. Their all images are free to use for any purpose.
* [Pixabay](https://www.pixabay.com/)

# Acknowledgement

* Special thanks to counselor 김승현(Seung-Hyun Kim), who helped me a lot in organizing the vast amount of data of HTP test and analysis.
* I am grateful to Dr. Trevor who flogged me to finally make this application as a beta version.

# Bug List
- There is no known bug.
- If any bugs are found, please report it to hkq118@uregina.ca
