#include <iostream>
using namespace std;

void showHeader() {
    cout << "======================================" << endl;
    cout << "          Akshay Sajeev" << endl;
    cout << " Electrical Engineering Student | RIT" << endl;
    cout << "======================================" << endl << endl;
}

void showAbout() {
    cout << "[About Me]" << endl;
    cout << "I am a focused and detail-oriented Electrical Engineering student at" << endl;
    cout << "Rajiv Gandhi Institute of Technology (RIT), Kottayam, with a passion" << endl;
    cout << "for electrical design, simulation, and embedded systems." << endl << endl;
}

void showSkills() {
    cout << "[Skills]" << endl;
    cout << "- Electrical Design: Circuit analysis, power systems, control systems, transformer fundamentals" << endl;
    cout << "- Simulation & Modeling: MATLAB/Simulink, Tinkercad" << endl;
    cout << "- Embedded Systems: Arduino, microcontroller programming (C/C++)" << endl;
    cout << "- Programming: C, C++, basic Python, basic HTML/CSS" << endl;
    cout << "- Technical: Protection & switchgear, power electronics" << endl;
    cout << "- Soft Skills: Team collaboration, project management, documentation" << endl << endl;
}

void showProjects() {
    cout << "[Projects]" << endl;
    cout << "- Rooftop Solar Power Plant Design — PVsyst-based simulation for optimal energy yield (2025)" << endl;
    cout << "- Wireless Power Transfer for EVs — Simulink model for efficient contactless charging (2025)" << endl;
    cout << "- Smart Dustbin — Arduino-based contactless waste disposal system (2024)" << endl;
    cout << "- Electronic Dice — 555-timer digital dice circuit (2024)" << endl;
    cout << "- Soil Moisture Sensor — Smart irrigation monitoring system (2023)" << endl << endl;
}

void showContact() {
    cout << "[Contact]" << endl;
    cout << "📧 Email: akshaysajeev2004@gmail.com" << endl;
    cout << "📞 Phone: +91 8281328978" << endl;
    cout << "📍 Location: Kottayam, Kerala" << endl;
    cout << "🔗 LinkedIn: https://linkedin.com/in/akshay-sajeev" << endl;
    cout << "🌐 Linktree: https://akshai2004.github.io/link-tree/" << endl;
    cout << "📷 Instagram: https://www.instagram.com/aks.haiiii_/" << endl;
    cout << endl;
}

int main() {
    showHeader();
    showAbout();
    showSkills();
    showProjects();
    showContact();

    return 0;
}
