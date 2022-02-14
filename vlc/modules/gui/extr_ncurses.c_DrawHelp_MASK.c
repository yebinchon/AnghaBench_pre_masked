
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_5__ {scalar_t__ color; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(intf_thread_t *VAR_2)
{
    intf_sys_t *VAR_3 = VAR_2->p_sys;
    int VAR_4 = 0;



    if (VAR_3->color) FUNC_2(VAR_0, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1("[Display]"));
    if (VAR_3->color) FUNC_2(VAR_1, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" h,H                    Show/Hide help box"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" i                      Show/Hide info box"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" M                      Show/Hide metadata box"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" L                      Show/Hide messages box"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" P                      Show/Hide playlist box"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" B                      Show/Hide filebrowser"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" S                      Show/Hide statistics box"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" Esc                    Close Add/Search entry"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" Ctrl-l                 Refresh the screen"));
    FUNC_0(VAR_3, VAR_4++, "");

    if (VAR_3->color) FUNC_2(VAR_0, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1("[Global]"));
    if (VAR_3->color) FUNC_2(VAR_1, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" q, Q, Esc              Quit"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" s                      Stop"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <space>                Pause/Play"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" f                      Toggle Fullscreen"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" c                      Cycle through audio tracks"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" v                      Cycle through subtitles tracks"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" b                      Cycle through video tracks"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" n, p                   Next/Previous playlist item"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" [, ]                   Next/Previous title"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <, >                   Next/Previous chapter"));

    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <left>,<right>         Seek -/+ 1%%"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" a, z                   Volume Up/Down"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" m                      Mute"));

    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <up>,<down>            Navigate through the box line by line"));

    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <pageup>,<pagedown>    Navigate through the box page by page"));

    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <start>,<end>          Navigate to start/end of box"));
    FUNC_0(VAR_3, VAR_4++, "");

    if (VAR_3->color) FUNC_2(VAR_0, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1("[Playlist]"));
    if (VAR_3->color) FUNC_2(VAR_1, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" r                      Toggle Random playing"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" l                      Toggle Loop Playlist"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" R                      Toggle Repeat item"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" o                      Order Playlist by title"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" O                      Reverse order Playlist by title"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" g                      Go to the current playing item"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" /                      Look for an item"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" ;                      Look for the next item"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" A                      Add an entry"));

    FUNC_0(VAR_3, VAR_4++, FUNC_1(" D, <backspace>, <del>  Delete an entry"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" e                      Eject (if stopped)"));
    FUNC_0(VAR_3, VAR_4++, "");

    if (VAR_3->color) FUNC_2(VAR_0, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1("[Filebrowser]"));
    if (VAR_3->color) FUNC_2(VAR_1, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <enter>                Add the selected file to the playlist"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <space>                Add the selected directory to the playlist"));
    FUNC_0(VAR_3, VAR_4++, FUNC_1(" .                      Show/Hide hidden files"));
    FUNC_0(VAR_3, VAR_4++, "");

    if (VAR_3->color) FUNC_2(VAR_0, ((void*)0));
    FUNC_0(VAR_3, VAR_4++, FUNC_1("[Player]"));
    if (VAR_3->color) FUNC_2(VAR_1, ((void*)0));

    FUNC_0(VAR_3, VAR_4++, FUNC_1(" <up>,<down>            Seek +/-5%%"));


    return VAR_4;
}
