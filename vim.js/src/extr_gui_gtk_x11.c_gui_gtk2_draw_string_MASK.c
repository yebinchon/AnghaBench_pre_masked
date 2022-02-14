
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_21__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int char_u ;
struct TYPE_40__ {scalar_t__ data; } ;
struct TYPE_39__ {int width; int height; int y; int x; } ;
struct TYPE_33__ {scalar_t__ x_offset; int width; } ;
struct TYPE_31__ {scalar_t__ is_cluster_start; } ;
struct TYPE_38__ {TYPE_2__ geometry; TYPE_1__ attr; } ;
struct TYPE_37__ {int* log_clusters; int num_glyphs; TYPE_7__* glyphs; } ;
struct TYPE_30__ {int level; int font; int shape_engine; } ;
struct TYPE_36__ {int offset; TYPE_13__ analysis; int length; } ;
struct TYPE_35__ {TYPE_7__* glyphs; } ;
struct TYPE_34__ {int * window; } ;
struct TYPE_32__ {int num_cols; int char_width; int text_gc; int * text_context; scalar_t__ font_can_bold; int * wide_font; int ascii_font; TYPE_4__* ascii_glyphs; int char_height; int border_offset; TYPE_3__* drawarea; } ;
struct TYPE_29__ {scalar_t__ vc_type; } ;
typedef TYPE_5__ PangoItem ;
typedef TYPE_6__ PangoGlyphString ;
typedef TYPE_7__ PangoGlyphInfo ;
typedef int PangoAttrList ;
typedef TYPE_8__ GdkRectangle ;
typedef TYPE_9__ GList ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*,int,int *) ;
 int FUNC_5 (int*,TYPE_5__*,TYPE_6__*,int,int*,int*) ;
 int VAR_6 ;
 int FUNC_6 (int,int,int,int,int ,TYPE_6__*) ;
 int FUNC_7 (int,int,int,int) ;
 TYPE_9__* FUNC_8 (TYPE_9__*,TYPE_9__*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,TYPE_8__*) ;
 TYPE_21__ VAR_7 ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int*,int*,int) ;
 TYPE_10__ VAR_8 ;
 int * FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_6__*) ;
 TYPE_6__* FUNC_20 () ;
 int FUNC_21 (TYPE_6__*,int) ;
 int FUNC_22 (TYPE_5__*) ;
 TYPE_9__* FUNC_23 (int *,char const*,int ,int,int *,int *) ;
 int FUNC_24 (char const*,int ,TYPE_13__*,TYPE_6__*) ;
 int FUNC_25 (TYPE_5__*,TYPE_7__*,int,int,int) ;
 int* FUNC_26 (TYPE_10__*,int*,int*) ;
 int FUNC_27 (int*) ;
 int FUNC_28 (int*) ;
 int FUNC_29 (int*) ;
 int FUNC_30 (int*) ;
 int FUNC_31 (int*,int*) ;
 int FUNC_32 (int*) ;

int
FUNC_33(int VAR_9, int VAR_10, char_u *VAR_11, int VAR_12, int VAR_13)
{
    GdkRectangle VAR_14;
    PangoGlyphString *VAR_15;
    int VAR_16 = 0;
    int VAR_17;
    char_u *VAR_18 = ((void*)0);
    char_u *VAR_19;
    int VAR_20;
    char_u *VAR_21, *VAR_22;
    int VAR_23;

    if (VAR_7.text_context == ((void*)0) || VAR_7.drawarea->window == ((void*)0))
 return VAR_12;

    if (VAR_8.vc_type != VAR_0)
    {






 VAR_20 = VAR_12;
 VAR_18 = FUNC_26(&VAR_8, VAR_11, &VAR_20);
 FUNC_9(VAR_18 != ((void*)0), VAR_12);




 for (VAR_21 = VAR_11, VAR_22 = VAR_18; VAR_21 < VAR_11 + VAR_12 && VAR_22 < VAR_18 + VAR_20; )
 {
     VAR_23 = FUNC_30(VAR_22);
     if (FUNC_12)(VAR_21) == 2 && FUNC_29(VAR_22) == 1)
     {
  VAR_19 = FUNC_3(VAR_20 + 2);
  if (VAR_19 == ((void*)0))
      return VAR_12;
  VAR_23 += VAR_22 - VAR_18;
  FUNC_14(VAR_19, VAR_18, VAR_23);
  VAR_19[VAR_23] = ' ';
  FUNC_14(VAR_19 + VAR_23 + 1, VAR_18 + VAR_23,
         VAR_20 - VAR_23 + 1);
  FUNC_32(VAR_18);
  VAR_18 = VAR_19;
  ++VAR_20;
  VAR_22 = VAR_18 + VAR_23;
  VAR_23 = 1;
     }
     VAR_21 += FUNC_13)(VAR_21);
     VAR_22 += VAR_23;
 }
 VAR_11 = VAR_18;
 VAR_12 = VAR_20;
    }





    VAR_14.x = VAR_7.border_offset;
    VAR_14.y = FUNC_0(VAR_9);
    VAR_14.width = VAR_7.num_cols * VAR_7.char_width;
    VAR_14.height = VAR_7.char_height;

    FUNC_10(VAR_7.text_gc, 0, 0);
    FUNC_11(VAR_7.text_gc, &VAR_14);

    VAR_15 = FUNC_20();






    if (!(VAR_13 & VAR_2)
     && !((VAR_13 & VAR_1) && VAR_7.font_can_bold)
     && VAR_7.ascii_glyphs != ((void*)0))
    {
 char_u *VAR_24;

 for (VAR_24 = VAR_11; VAR_24 < VAR_11 + VAR_12; ++VAR_24)
     if (*VAR_24 & 0x80)
  goto not_ascii;

 FUNC_21(VAR_15, VAR_12);

 for (VAR_17 = 0; VAR_17 < VAR_12; ++VAR_17)
 {
     VAR_15->glyphs[VAR_17] = VAR_7.ascii_glyphs->glyphs[VAR_11[VAR_17]];
     VAR_15->log_clusters[VAR_17] = VAR_17;
 }

 FUNC_6(VAR_9, VAR_10, VAR_12, VAR_13, VAR_7.ascii_font, VAR_15);

 VAR_16 = VAR_12;
    }
    else
not_ascii:
    {
 PangoAttrList *VAR_25;
 GList *VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29 = 0;



 if (!FUNC_31(VAR_11, VAR_11 + VAR_12))
 {
     VAR_16 = VAR_12;
     goto skipitall;
 }


 VAR_27 = VAR_3 * VAR_7.char_width;


 VAR_28 = VAR_3 * VAR_7.char_width;

 VAR_25 = FUNC_15();



 if (VAR_7.wide_font != ((void*)0))
     FUNC_4(VAR_11, VAR_12, VAR_25);

 if ((VAR_13 & VAR_1) && VAR_7.font_can_bold)
     FUNC_1(FUNC_18(VAR_5),
         VAR_25, 0, VAR_12);
 if (VAR_13 & VAR_2)
     FUNC_1(FUNC_17(VAR_4),
         VAR_25, 0, VAR_12);






 VAR_26 = FUNC_23(VAR_7.text_context,
      (const char *)VAR_11, 0, VAR_12, VAR_25, ((void*)0));

 while (VAR_26 != ((void*)0))
 {
     PangoItem *VAR_30;
     int VAR_31 = 0;

     VAR_30 = (PangoItem *)VAR_26->data;
     VAR_26 = FUNC_8(VAR_26, VAR_26);
     VAR_30->analysis.level = (VAR_30->analysis.level + 1) & (~1U);



     VAR_30->analysis.shape_engine = VAR_6;

     FUNC_24((const char *)VAR_11 + VAR_30->offset, VAR_30->length,
   &VAR_30->analysis, VAR_15);
     for (VAR_17 = 0; VAR_17 < VAR_15->num_glyphs; ++VAR_17)
     {
  PangoGlyphInfo *VAR_32;

  VAR_32 = &VAR_15->glyphs[VAR_17];

  if (VAR_32->attr.is_cluster_start)
  {
      int VAR_33;

      VAR_33 = FUNC_5(
   VAR_11, VAR_30, VAR_15, VAR_17, &VAR_27,
   (VAR_26 != ((void*)0)) ? &VAR_28 : ((void*)0));

      if (VAR_33 > 0)
      {
   int VAR_34;

   VAR_34 = VAR_33 * VAR_7.char_width * VAR_3;
   VAR_32->geometry.x_offset +=
         FUNC_2(0, VAR_34 - VAR_27) / 2;
   VAR_32->geometry.width = VAR_34;
      }
      else
      {




   FUNC_25(VAR_30, VAR_32, VAR_29,
       VAR_27,
       VAR_28);
      }

      VAR_31 += VAR_33;
      VAR_29 = VAR_33;
  }
  else if (VAR_17 > 0)
  {
      int VAR_35;
      if (VAR_32->geometry.x_offset >= 0)
      {
   VAR_15->glyphs[VAR_17].geometry.width =
      VAR_15->glyphs[VAR_17 - 1].geometry.width;
   VAR_15->glyphs[VAR_17 - 1].geometry.width = 0;
      }
      VAR_35 = VAR_29 * VAR_7.char_width * VAR_3;
      VAR_32->geometry.x_offset +=
         FUNC_2(0, VAR_35 - VAR_27) / 2;
  }
  else
  {
      VAR_32->geometry.width = 0;
  }
     }


     FUNC_6(VAR_9, VAR_10 + VAR_16, VAR_31,
         VAR_13, VAR_30->analysis.font, VAR_15);

     FUNC_22(VAR_30);

     VAR_16 += VAR_31;
 }

 FUNC_16(VAR_25);
    }

skipitall:

    FUNC_7(VAR_13, VAR_9, VAR_10, VAR_16);

    FUNC_19(VAR_15);
    FUNC_32(VAR_18);

    FUNC_11(VAR_7.text_gc, ((void*)0));

    return VAR_16;
}
