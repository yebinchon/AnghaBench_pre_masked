
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef char char_u ;
typedef int ascii_chars ;
struct TYPE_19__ {int num_glyphs; TYPE_1__* glyphs; } ;
struct TYPE_18__ {int * font; int shape_engine; } ;
struct TYPE_17__ {scalar_t__ data; int * next; } ;
struct TYPE_16__ {int x_offset; int width; } ;
struct TYPE_15__ {TYPE_5__ analysis; } ;
struct TYPE_14__ {TYPE_3__ geometry; } ;
struct TYPE_13__ {int char_width; TYPE_6__* ascii_glyphs; int * ascii_font; int text_context; } ;
typedef TYPE_2__ PangoItem ;
typedef TYPE_3__ PangoGlyphGeometry ;
typedef int PangoAttrList ;
typedef TYPE_4__ GList ;
typedef int GFunc ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 TYPE_10__ VAR_2 ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_6__*) ;
 TYPE_6__* FUNC_9 () ;
 int VAR_3 ;
 TYPE_4__* FUNC_10 (int ,char const*,int ,int,int *,int *) ;
 int FUNC_11 (char const*,int,TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_12(void)
{
    char_u VAR_4[128];
    PangoAttrList *VAR_5;
    GList *VAR_6;
    int VAR_7;

    if (VAR_2.ascii_glyphs != ((void*)0))
 FUNC_8(VAR_2.ascii_glyphs);
    if (VAR_2.ascii_font != ((void*)0))
 FUNC_4(VAR_2.ascii_font);

    VAR_2.ascii_glyphs = ((void*)0);
    VAR_2.ascii_font = ((void*)0);


    for (VAR_7 = 0; VAR_7 < 32; ++VAR_7)
 VAR_4[VAR_7] = '?';
    for (; VAR_7 < 127; ++VAR_7)
 VAR_4[VAR_7] = VAR_7;
    VAR_4[VAR_7] = '?';

    VAR_5 = FUNC_6();
    VAR_6 = FUNC_10(VAR_2.text_context, (const char *)VAR_4,
         0, sizeof(VAR_4), VAR_5, ((void*)0));

    if (VAR_6 != ((void*)0) && VAR_6->next == ((void*)0))
    {
 PangoItem *VAR_8;
 int VAR_9;

 VAR_8 = (PangoItem *)VAR_6->data;
 VAR_9 = VAR_2.char_width * VAR_0;


 VAR_1 = VAR_8->analysis.shape_engine;

 VAR_2.ascii_font = VAR_8->analysis.font;
 FUNC_3(VAR_2.ascii_font);

 VAR_2.ascii_glyphs = FUNC_9();

 FUNC_11((const char *)VAR_4, sizeof(VAR_4),
      &VAR_8->analysis, VAR_2.ascii_glyphs);

 FUNC_5(VAR_2.ascii_glyphs->num_glyphs == sizeof(VAR_4));

 for (VAR_7 = 0; VAR_7 < VAR_2.ascii_glyphs->num_glyphs; ++VAR_7)
 {
     PangoGlyphGeometry *VAR_10;

     VAR_10 = &VAR_2.ascii_glyphs->glyphs[VAR_7].geometry;
     VAR_10->x_offset += FUNC_0(0, VAR_9 - VAR_10->width) / 2;
     VAR_10->width = VAR_9;
 }
    }

    FUNC_1(VAR_6, (GFunc)&VAR_3, ((void*)0));
    FUNC_2(VAR_6);
    FUNC_7(VAR_5);
}
