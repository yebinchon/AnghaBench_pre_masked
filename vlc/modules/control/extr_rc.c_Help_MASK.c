
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intf_thread_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2( intf_thread_t *VAR_0)
{
    FUNC_1("%s", FUNC_0("+----[ Remote control commands ]"));
    FUNC_1( "| ");
    FUNC_1("%s", FUNC_0("| add XYZ  . . . . . . . . . . . . add XYZ to playlist"));
    FUNC_1("%s", FUNC_0("| enqueue XYZ  . . . . . . . . . queue XYZ to playlist"));
    FUNC_1("%s", FUNC_0("| playlist . . . . .  show items currently in playlist"));
    FUNC_1("%s", FUNC_0("| play . . . . . . . . . . . . . . . . . . play stream"));
    FUNC_1("%s", FUNC_0("| stop . . . . . . . . . . . . . . . . . . stop stream"));
    FUNC_1("%s", FUNC_0("| next . . . . . . . . . . . . . .  next playlist item"));
    FUNC_1("%s", FUNC_0("| prev . . . . . . . . . . . .  previous playlist item"));
    FUNC_1("%s", FUNC_0("| goto . . . . . . . . . . . . . .  goto item at index"));
    FUNC_1("%s", FUNC_0("| repeat [on|off] . . . .  toggle playlist item repeat"));
    FUNC_1("%s", FUNC_0("| loop [on|off] . . . . . . . . . toggle playlist loop"));
    FUNC_1("%s", FUNC_0("| random [on|off] . . . . . . .  toggle random jumping"));
    FUNC_1("%s", FUNC_0("| clear . . . . . . . . . . . . . . clear the playlist"));
    FUNC_1("%s", FUNC_0("| status . . . . . . . . . . . current playlist status"));
    FUNC_1("%s", FUNC_0("| title [X]  . . . . . . set/get title in current item"));
    FUNC_1("%s", FUNC_0("| title_n  . . . . . . . .  next title in current item"));
    FUNC_1("%s", FUNC_0("| title_p  . . . . . .  previous title in current item"));
    FUNC_1("%s", FUNC_0("| chapter [X]  . . . . set/get chapter in current item"));
    FUNC_1("%s", FUNC_0("| chapter_n  . . . . . .  next chapter in current item"));
    FUNC_1("%s", FUNC_0("| chapter_p  . . . .  previous chapter in current item"));
    FUNC_1( "| ");
    FUNC_1("%s", FUNC_0("| seek X . . . seek in seconds, for instance `seek 12'"));
    FUNC_1("%s", FUNC_0("| pause  . . . . . . . . . . . . . . . .  toggle pause"));
    FUNC_1("%s", FUNC_0("| fastforward  . . . . . . . .  .  set to maximum rate"));
    FUNC_1("%s", FUNC_0("| rewind  . . . . . . . . . . . .  set to minimum rate"));
    FUNC_1("%s", FUNC_0("| faster . . . . . . . . . .  faster playing of stream"));
    FUNC_1("%s", FUNC_0("| slower . . . . . . . . . .  slower playing of stream"));
    FUNC_1("%s", FUNC_0("| normal . . . . . . . . . .  normal playing of stream"));
    FUNC_1("%s", FUNC_0("| frame. . . . . . . . . .  play frame by frame"));
    FUNC_1("%s", FUNC_0("| f [on|off] . . . . . . . . . . . . toggle fullscreen"));
    FUNC_1("%s", FUNC_0("| info . . . . .  information about the current stream"));
    FUNC_1("%s", FUNC_0("| stats  . . . . . . . .  show statistical information"));
    FUNC_1("%s", FUNC_0("| get_time . . seconds elapsed since stream's beginning"));
    FUNC_1("%s", FUNC_0("| is_playing . . . .  1 if a stream plays, 0 otherwise"));
    FUNC_1("%s", FUNC_0("| get_title . . . . .  the title of the current stream"));
    FUNC_1("%s", FUNC_0("| get_length . . . .  the length of the current stream"));
    FUNC_1( "| ");
    FUNC_1("%s", FUNC_0("| volume [X] . . . . . . . . . .  set/get audio volume"));
    FUNC_1("%s", FUNC_0("| volup [X]  . . . . . . .  raise audio volume X steps"));
    FUNC_1("%s", FUNC_0("| voldown [X]  . . . . . .  lower audio volume X steps"));
    FUNC_1("%s", FUNC_0("| adev [device]  . . . . . . . .  set/get audio device"));
    FUNC_1("%s", FUNC_0("| achan [X]. . . . . . . . . .  set/get audio channels"));
    FUNC_1("%s", FUNC_0("| atrack [X] . . . . . . . . . . . set/get audio track"));
    FUNC_1("%s", FUNC_0("| vtrack [X] . . . . . . . . . . . set/get video track"));
    FUNC_1("%s", FUNC_0("| vratio [X]  . . . . . . . set/get video aspect ratio"));
    FUNC_1("%s", FUNC_0("| vcrop [X]  . . . . . . . . . . .  set/get video crop"));
    FUNC_1("%s", FUNC_0("| vzoom [X]  . . . . . . . . . . .  set/get video zoom"));
    FUNC_1("%s", FUNC_0("| snapshot . . . . . . . . . . . . take video snapshot"));
    FUNC_1("%s", FUNC_0("| record [on|off] . . . . . . . . . . toggle recording"));
    FUNC_1("%s", FUNC_0("| strack [X] . . . . . . . . .  set/get subtitle track"));
    FUNC_1("%s", FUNC_0("| key [hotkey name] . . . . . .  simulate hotkey press"));
    FUNC_1( "| ");
    FUNC_1("%s", FUNC_0("| help . . . . . . . . . . . . . . . this help message"));
    FUNC_1("%s", FUNC_0("| logout . . . . . . .  exit (if in socket connection)"));
    FUNC_1("%s", FUNC_0("| quit . . . . . . . . . . . . . . . . . . .  quit vlc"));
    FUNC_1( "| ");
    FUNC_1("%s", FUNC_0("+----[ end of help ]"));
}
