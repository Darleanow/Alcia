#include <saucer/smartview.hpp>
#include <Frontend/embedded/all.hpp>

int main() {
    saucer::smartview smartview;

    smartview.set_title("Alcia, Final Version");
    smartview.set_force_dark_mode(true);

    //smartview.set_icon()

    smartview.embed(saucer::embedded::all());
    smartview.serve("index.html");

    smartview.show(); // Show the smartview
    smartview.run(); // And finally enter the run-loop.

    return 0;
}
