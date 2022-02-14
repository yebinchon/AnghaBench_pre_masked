
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline unsigned FUNC_2( unsigned VAR_0 )
{
    FUNC_0(VAR_0 >= 0xc0);
    if(FUNC_1(VAR_0 < 0xc0))
        return 0;
    else if( VAR_0 <= 0xff )
        return VAR_0 - 0xc0;
    else if( (VAR_0 & 0xff00) == 0xbd00 )
        return 256-0xC0 + (VAR_0 & 0xff);
    else if( (VAR_0 & 0xff00) == 0xfd00 )
        return 512-0xc0 + (VAR_0 & 0xff);
    else
        return 768-0xc0 + (VAR_0 & 0x07);
}
