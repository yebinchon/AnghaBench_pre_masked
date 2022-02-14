
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int notificationLevel; } ;
struct TYPE_8__ {TYPE_1__ zParams; } ;
typedef TYPE_2__ ZDICT_random_params_t ;
typedef int U32 ;
struct TYPE_9__ {int end; int begin; } ;
typedef TYPE_3__ RANDOM_segment_t ;
typedef int BYTE ;


 int FUNC_0 (int,char*,int ) ;
 size_t FUNC_1 (int,size_t) ;
 TYPE_3__ FUNC_2 (size_t const,TYPE_2__) ;
 int FUNC_3 (int * const,int const*,size_t) ;

__attribute__((used)) static size_t FUNC_4(const size_t VAR_0, const BYTE *VAR_1,
                                    void *VAR_2, size_t VAR_3,
                                    ZDICT_random_params_t VAR_4) {
    BYTE *const VAR_5 = (BYTE *)VAR_2;
    size_t VAR_6 = VAR_3;
    const int VAR_7 = VAR_4.zParams.notificationLevel;
    while (VAR_6 > 0) {


      RANDOM_segment_t VAR_8 = FUNC_2(VAR_0, VAR_4);

      size_t VAR_9;
      VAR_9 = FUNC_1(VAR_8.end - VAR_8.begin + 1, VAR_6);

      VAR_6 -= VAR_9;
      FUNC_3(VAR_5 + VAR_6, VAR_1 + VAR_8.begin, VAR_9);
      FUNC_0(
          2, "\r%u%%       ",
          (U32)(((VAR_3 - VAR_6) * 100) / VAR_3));
    }

    return VAR_6;
}
