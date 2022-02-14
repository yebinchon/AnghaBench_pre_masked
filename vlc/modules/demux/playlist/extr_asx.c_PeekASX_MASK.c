
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (int ,int const**,int) ;

__attribute__((used)) static bool FUNC_2( stream_t *VAR_0 )
{
    const uint8_t *VAR_1;
    return ( FUNC_1( VAR_0->s, &VAR_1, 12 ) == 12
             && !FUNC_0( (const char*) VAR_1, "<asx version", 12 ) );
}
