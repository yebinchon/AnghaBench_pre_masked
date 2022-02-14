
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zh_hdr_size; int zh_stats_size; int zh_stats_count; scalar_t__ zh_size; scalar_t__ zh_opts_size; } ;
typedef TYPE_1__ ztest_shared_hdr_t ;
typedef int uint8_t ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 TYPE_1__* VAR_8 ;
 void* VAR_9 ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_10, VAR_11;
 ztest_shared_hdr_t *VAR_12;
 uint8_t *VAR_13;

 VAR_12 = (void *)FUNC_3(0, FUNC_1(sizeof (*VAR_12), FUNC_2()),
     VAR_2, VAR_1, VAR_4, 0);
 FUNC_0(VAR_12 != VAR_0);

 VAR_10 = FUNC_5(VAR_12);

 (void) FUNC_4((caddr_t)VAR_12, FUNC_1(sizeof (*VAR_12), FUNC_2()));
 VAR_12 = VAR_8 = (void *)FUNC_3(0, FUNC_1(VAR_10, FUNC_2()),
     VAR_2 | VAR_3, VAR_1, VAR_4, 0);
 FUNC_0(VAR_12 != VAR_0);
 VAR_13 = (uint8_t *)VAR_12;

 VAR_11 = VAR_12->zh_hdr_size;
 VAR_9 = (void *)&VAR_13[VAR_11];
 VAR_11 += VAR_12->zh_opts_size;
 VAR_5 = (void *)&VAR_13[VAR_11];
 VAR_11 += VAR_12->zh_size;
 VAR_6 = (void *)&VAR_13[VAR_11];
 VAR_11 += VAR_12->zh_stats_size * VAR_12->zh_stats_count;
 VAR_7 = (void *)&VAR_13[VAR_11];
}
