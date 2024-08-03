#include <memory>
#include <string>
#include "ftxui/component/captured_mouse.hpp"
#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "ftxui/dom/elements.hpp"
#include "ftxui/screen/color.hpp"

using namespace ftxui;

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
    auto menu = Menu(&entries, &selected) | color(Color::Orange1) | border;

    const auto container = Container::Vertical({
        menu
    });

    const auto renderer = Renderer(container, [&] {
        return vbox({
                   text(title) | bold | color(Color::Orange3) | border,
                   menu->Render()
               }) | center | borderHeavy;
    });

    screen.Loop(renderer);
    return 0;
}
