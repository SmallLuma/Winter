#include "CGViewer.h"

using namespace ACGCross::Galgame;

CGViewer::CGViewer()
{
    //ctor
}

CGViewer::~CGViewer()
{
    //dtor
}

void CGViewer::OnShow()
{
    PNT("CGVIEWER:ONSHOW");
}

void CGViewer::OnHide()
{
    PNT("CGVIEWER:ONHIDE");
}

void CGViewer::OnInit()
{
    PNT("CGVIEWER:ONINIT");
}

void CGViewer::OnDraw()
{
    PNT("CGVIEWER:ONDRAW");
}

void CGViewer::OnEvent(const SDL_Event& e)
{
    PNT("CGVIEWER:ONEVENT SDL");
    if(e.type == SDL_MOUSEBUTTONUP){
        Core::Return();
    }
}

void CGViewer::OnNext()
{
    PNT("CGVIEWER:ONNEXT");
}
