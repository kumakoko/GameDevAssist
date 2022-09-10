#include "game_dev_assist_app.h"
#include "game_dev_assist_main_frame.h"

wxIMPLEMENT_APP(GameDevAssistApp);

bool GameDevAssistApp::OnInit()
{
    wxImage::AddHandler(new wxPNGHandler);
    wxImage::AddHandler(new wxTGAHandler);
    GameDevAssistMainFrame* frame = new GameDevAssistMainFrame(nullptr);
    frame->Show(true);
    return true;
}