
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef enum j2k_profiles_e { ____Placeholder_j2k_profiles_e } j2k_profiles_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline enum j2k_profiles_e FUNC_0( unsigned VAR_3, unsigned VAR_4,
                                                   unsigned VAR_5, unsigned VAR_6, bool VAR_7 )
{
    const uint64_t VAR_8 = VAR_3 *(uint64_t)VAR_4;
    const uint64_t VAR_9 = VAR_5 / VAR_6;
    if( VAR_8 <= 720*576 && VAR_9 < 50 )
        return VAR_2;
    else if( VAR_8 <= 1280*720 && VAR_9 < 60 && VAR_7 )
        return VAR_1;
    else if( VAR_8 <= 1920*1080 && VAR_9 < 60 && !VAR_7 )
        return VAR_1;
    else
        return VAR_0;
}
