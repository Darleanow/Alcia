#include <memory>
#include <string>
#include <iostream>
#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "ftxui/dom/elements.hpp"
#include "ftxui/screen/color.hpp"

using namespace ftxui;

/**
 * Sets up the game
 */
void play_game() {
    std::cout << "Starting the game..." << std::endl;
    // Add your game starting logic here
}

/**
 * Displays some parameters to configure for an enhanced experience
 */
void show_options() {
    std::cout << "Displaying options..." << std::endl;
    // Add your options logic here
}

/**
 * Some informations about the dev, project related.
 */
void show_about() {
    std::cout << "Showing about information..." << std::endl;
    // Add your about logic here
}

/**
 * Exit the game.
 */
void quit_game() {
    exit(0);
}

int main() {
    auto screen = ScreenInteractive::Fullscreen();

    const std::string title = "    Alcia : Revamp    ";

    const std::vector<std::wstring> entries = {
        L"Play",
        L"Options",
        L"About",
        L"Quit"
    };
    int selected = 0;

    auto menu = Menu(&entries, &selected);

    auto container = Container::Vertical({
        menu
    });

    auto main_component = Renderer(container, [&] {
        return vbox({
                   text(title) | bold | color(Color::Orange3) | border,
                   menu->Render() | color(Color::Orange1) | border
               }) | center | borderHeavy;
    });

    main_component = CatchEvent(main_component, [&](const Event &event) {
        if (event == Event::Return) {
            switch (selected) {
                case 0: play_game();
                    break;
                case 1: show_options();
                    break;
                case 2: show_about();
                    break;
                case 3: quit_game();
                    break;
                default: break;
            }
            return true;
        }
        return false;
    });

    screen.Loop(main_component);
    return 0;
}
