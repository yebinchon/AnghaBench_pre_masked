
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
struct vlc_h2_parser {int parser; } ;
struct vlc_h2_frame {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (struct vlc_h2_frame*) ;
 scalar_t__ FUNC_2 (struct vlc_h2_frame*) ;
 int FUNC_3 (struct vlc_h2_parser*,int ) ;
 int FUNC_4 (struct vlc_h2_parser*,struct vlc_h2_frame*,size_t,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct vlc_h2_parser *VAR_5,
                                struct vlc_h2_frame *VAR_6, size_t VAR_7,
                                uint_fast32_t VAR_8)
{

    if (VAR_7 > VAR_0

     || FUNC_2(VAR_6) != VAR_1

     || (FUNC_1(VAR_6) & VAR_3))
    {
        FUNC_0(VAR_6);
        return FUNC_3(VAR_5, VAR_2);
    }

    VAR_5->parser = VAR_4;

    return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
}
