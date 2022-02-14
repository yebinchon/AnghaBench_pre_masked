
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ windowLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
typedef TYPE_2__ ZSTD_parameters ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ FUNC_1 (int ,size_t,int ) ;

__attribute__((used)) static ZSTD_parameters FUNC_2(size_t VAR_3)
{
 ZSTD_parameters VAR_4 = FUNC_1(VAR_0,
      VAR_3, 0);

 if (VAR_4.cParams.windowLog > VAR_2)
  VAR_4.cParams.windowLog = VAR_2;
 FUNC_0(VAR_3 > VAR_1);
 return VAR_4;
}
