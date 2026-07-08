# Blink ESP32

Ce projet PlatformIO est un exemple simple pour faire clignoter une LED sur un module ESP32.

## Rôle du projet

- Montrer un programme minimal Arduino pour ESP32.
- Faire clignoter une LED connectée au GPIO 25.
- Utiliser `delay()` pour alterner l'état ON/OFF à 3 Hz.

## Contenu

- `platformio.ini` : configuration du projet pour la carte `esp32dev`.
- `src/main.cpp` : code principal qui initialise la broche et gère le clignotement.

## Fonctionnement

- La LED est allumée et éteinte toutes les ~166 ms.
- Cela donne une fréquence de clignotement de 3 Hz.

## Compilation

- Ouvrir le dossier du projet dans Visual Studio Code.
- Lancer `PlatformIO: Build` ou exécuter `pio run` dans le terminal.

## Notes

- Ce projet est conçu pour un usage de démonstration et d'apprentissage.
- Il peut servir de base pour développer des applications Arduino plus avancées sur ESP32.
