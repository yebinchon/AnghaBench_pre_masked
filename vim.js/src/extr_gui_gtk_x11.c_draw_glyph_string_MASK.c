
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int char_width; int text_gc; TYPE_1__* drawarea; int font_can_bold; int fgcolor; int char_height; int bgcolor; } ;
struct TYPE_3__ {int window; } ;
typedef int PangoGlyphString ;
typedef int PangoFont ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int *,scalar_t__,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(int VAR_4, int VAR_5, int VAR_6, int VAR_7,
    PangoFont *VAR_8, PangoGlyphString *VAR_9)
{
    if (!(VAR_7 & VAR_1))
    {
 FUNC_6(VAR_3.text_gc, VAR_3.bgcolor);

 FUNC_5(VAR_3.drawarea->window,
      VAR_3.text_gc,
      VAR_2,
      FUNC_0(VAR_5),
      FUNC_1(VAR_4),
      VAR_6 * VAR_3.char_width,
      VAR_3.char_height);
    }

    FUNC_6(VAR_3.text_gc, VAR_3.fgcolor);

    FUNC_4(VAR_3.drawarea->window,
      VAR_3.text_gc,
      VAR_8,
      FUNC_2(VAR_5),
      FUNC_3(VAR_4),
      VAR_9);


    if ((VAR_7 & VAR_0) && !VAR_3.font_can_bold)
 FUNC_4(VAR_3.drawarea->window,
   VAR_3.text_gc,
   VAR_8,
   FUNC_2(VAR_5) + 1,
   FUNC_3(VAR_4),
   VAR_9);
}
