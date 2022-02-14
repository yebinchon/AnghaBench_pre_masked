
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
struct vlc_h2_parser {int (* parser ) (struct vlc_h2_parser*,struct vlc_h2_frame*,size_t,int ) ;} ;
struct vlc_h2_frame {struct vlc_h2_frame* next; } ;


 int FUNC_0 (struct vlc_h2_parser*,struct vlc_h2_frame*,size_t,int ) ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 size_t FUNC_2 (struct vlc_h2_frame*) ;
 int FUNC_3 (struct vlc_h2_parser*,struct vlc_h2_frame*,size_t,int ) ;

int FUNC_4(struct vlc_h2_parser *VAR_0, struct vlc_h2_frame *VAR_1)
{
    int VAR_2 = 0;

    while (VAR_1 != ((void*)0))
    {
        struct vlc_h2_frame *VAR_3 = VAR_1->next;
        size_t VAR_4 = FUNC_2(VAR_1);
        uint_fast32_t VAR_5 = FUNC_1(VAR_1);

        VAR_1->next = ((void*)0);
        VAR_2 = VAR_0->parser(VAR_0, VAR_1, VAR_4, VAR_5);
        if (VAR_2)
            VAR_0->parser = FUNC_3;
        VAR_1 = VAR_3;
    }

    return VAR_2;
}
