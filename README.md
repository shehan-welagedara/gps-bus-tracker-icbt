# CTB Bus Tracking System

## Introduction

The CTB Bus Tracking System is an advanced web-based application developed to enhance the efficiency and convenience of public transportation by providing real-time tracking and monitoring of CTB (Ceylon Transport Board) buses. Leveraging cutting-edge technologies and innovative design principles, this system offers commuters an intuitive platform to access accurate information about bus locations, routes, and arrival times, thereby streamlining their travel experience. Developed by Networking Batch 03 at ICBT Campus, this project aims to address the challenges faced by passengers in navigating the public transportation network and empower them with the tools needed to make informed travel decisions.

## Features

### Real-time Bus Tracking
- Displays the current location of CTB buses on an interactive map interface.
- Updates bus locations in real-time to provide accurate and timely information to users.
- Allows users to track multiple buses simultaneously and view their movement on the map.

### Driver Mode
- Enables bus drivers to input bus details, including route numbers and other relevant information.
- Allows drivers to start sending location data, facilitating the tracking of their respective buses by commuters.
- Integrates seamlessly with the Firebase Realtime Database to store and retrieve bus location data securely.

### Firebase Integration
- Utilizes Firebase Realtime Database for storing and managing bus location data.
- Implements Firebase authentication for secure access control and user management.
- Leverages Firebase hosting for seamless deployment and hosting of the web application.

### User-friendly Interface
- Provides an intuitive and responsive user interface for easy navigation and interaction.
- Incorporates modern design principles and UI components to enhance the user experience.
- Ensures accessibility and compatibility across a wide range of devices and screen sizes.

### Community Engagement
- Encourages user participation and feedback through interactive features such as comment forms and community forums.
- Values user input and incorporates feedback to continuously improve and enhance the system.
- Fosters a sense of community among users by providing a platform for sharing experiences and insights.

## Hardware Components

The CTB Bus Tracking System involves the following hardware components:

1. **GPS Module**: Installed in each CTB bus to track its real-time location.
2. **Microcontroller**: Controls the operation of the GPS module and interfaces with other hardware components.
3. **GSM/GPRS Module**: Enables communication between the microcontroller and the central server using cellular networks.
4. **Power Supply**: Provides electrical power to the GPS module, microcontroller, and GSM/GPRS module.
5. **Antenna**: Connected to the GSM/GPRS module to enhance signal reception for reliable communication.
6. **Enclosure**: Houses the hardware components and protects them from environmental factors such as dust, moisture, and vibration.

## Technologies Used

- **HTML5**: For structuring the web pages and content.
- **CSS3**: For styling and formatting the user interface.
- **JavaScript**: For implementing interactive features and functionality.
- **Bootstrap 5**: For responsive design and layout.
- **Google Maps JavaScript API**: For integrating interactive maps and displaying bus locations.
- **Firebase Realtime Database**: For storing and retrieving bus location data in real-time.
- **Firebase Authentication**: For user authentication and access control.
- **Firebase Hosting**: For deploying and hosting the web application.

## Getting Started

To get started with the CTB Bus Tracking System, follow these steps:

1. Clone the repository to your local machine.
2. Open the `firstpage.html` file in a web browser to access the main menu.
3. Choose an option from the menu to navigate to the desired functionality:
   - "CTB TRACKER": Access the map interface to track bus locations.
   - "DRIVER MODE": Access the page for bus drivers to input bus details and start sending location data.

## Usage

### CTB TRACKER

- Upon selecting this option from the main menu, you will be redirected to `heropage-dark.html`.
- The map interface will display the current locations of CTB buses with markers.
- Clicking on a bus marker will display the bus details, including its route number.
- You can scroll down to learn more about the CTB Bus Tracking System and its features.

### DRIVER MODE

- Upon selecting this option from the main menu, you will be redirected to `driverpage.html`.
- Enter the bus details, including route number, in the input field provided.
- Click the "Send Location" button to start sending the bus's current location to the database.
- The location data will be continuously updated and displayed on the map for users to track.

## Firebase Configuration

- Replace the Firebase configuration in the `firebase.js` file with your own Firebase project configuration.
- Ensure that Firebase Realtime Database is enabled for your project and set up with appropriate security rules.

## Contributing

Contributions to the CTB Bus Tracking System are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/new-feature`).
3. Make your changes and commit them (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature/new-feature`).
5. Create a new Pull Request.

## Acknowledgements

- This project was developed as part of a group project by Networking Batch 03 at ICBT Campus.
- Special thanks to all contributors for their efforts and contributions to the project.

## Contact

For any inquiries or support, please contact the project maintainer:
- Shehan Welagedara
- Email: shehaneditor@gmail.com
