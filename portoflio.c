#include <stdio.h>

void showHeader() {
    printf("======================================\n");
    printf("           Akshay Sajeev\n");
    printf(" Electrical Engineering Student | RIT\n");
    printf("======================================\n\n");
}

void showAbout() {
    printf("[About Me]\n");
    printf("I am a focused and detail-oriented Electrical Engineering student at\n");
    printf("Rajiv Gandhi Institute of Technology (RIT), Kottayam, with a passion\n");
    printf("for electrical design, simulation, and embedded systems.\n\n");
}

void showSkills() {
    printf("[Skills]\n");
    printf("- Electrical Design: Circuit analysis, power systems, control systems, transformer fundamentals\n");
    printf("- Simulation & Modeling: MATLAB/Simulink, Tinkercad\n");
    printf("- Embedded Systems: Arduino, microcontroller programming (C/C++)\n");
    printf("- Programming: C, C++, basic Python, basic HTML/CSS\n");
    printf("- Technical: Protection & switchgear, power electronics\n");
    printf("- Soft Skills: Team collaboration, project management, documentation\n\n");
}

void showProjects() {
    printf("[Projects]\n");
    printf("- Rooftop Solar Power Plant Design — PVsyst-based simulation for optimal energy yield (2025)\n");
    printf("- Wireless Power Transfer for EVs — Simulink model for efficient contactless charging (2025)\n");
    printf("- Smart Dustbin — Arduino-based contactless waste disposal system (2024)\n");
    printf("- Electronic Dice — 555-timer digital dice circuit (2024)\n");
    printf("- Soil Moisture Sensor — Smart irrigation monitoring system (2023)\n\n");
}

void showContact() {
    printf("[Contact]\n");
    printf("📧 Email: akshaysajeev2004@gmail.com\n");
    printf("📞 Phone: +91 8281328978\n");
    printf("📍 Location: Kottayam, Kerala\n");
    printf("🔗 LinkedIn: https://linkedin.com/in/akshay-sajeev\n");
    printf("🌐 Linktree: https://akshai2004.github.io/link-tree/\n");
    printf("📷 Instagram: https://www.instagram.com/aks.haiiii_/\n\n");
}

int main() {
    showHeader();
    showAbout();
    showSkills();
    showProjects();
    showContact();

    return 0;
}
