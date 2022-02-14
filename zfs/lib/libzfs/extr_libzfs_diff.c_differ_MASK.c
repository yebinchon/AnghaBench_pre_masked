
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dr ;
struct TYPE_7__ {int ddr_type; } ;
typedef TYPE_1__ dmu_diff_record_t ;
struct TYPE_8__ {scalar_t__ zerr; int errbuf; int datafd; int outputfd; } ;
typedef TYPE_2__ differ_info_t ;
typedef int FILE ;


 int FUNC_0 (int) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void *
FUNC_11(void *VAR_3)
{
 differ_info_t *VAR_4 = VAR_3;
 dmu_diff_record_t VAR_5;
 FILE *VAR_6;
 int VAR_7 = 0;

 if ((VAR_6 = FUNC_4(VAR_4->outputfd, "w")) == ((void*)0)) {
  VAR_4->zerr = VAR_2;
  FUNC_8(VAR_4->errbuf, FUNC_7(VAR_2), sizeof (VAR_4->errbuf));
  (void) FUNC_1(VAR_4->datafd);
  return ((void *)-1);
 }

 for (;;) {
  char *VAR_8 = (char *)&VAR_5;
  int VAR_9 = sizeof (VAR_5);
  int VAR_10;

  do {
   VAR_10 = FUNC_5(VAR_4->datafd, VAR_8, VAR_9);
   VAR_8 += VAR_10;
   VAR_9 -= VAR_10;
  } while (VAR_9 > 0 && VAR_10 > 0);

  if (VAR_10 < 0 || (VAR_10 == 0 && VAR_9 != sizeof (VAR_5))) {
   VAR_4->zerr = VAR_0;
   break;
  } else if (VAR_10 == 0) {

   break;
  }

  switch (VAR_5.ddr_type) {
  case 129:
   VAR_7 = FUNC_9(VAR_6, VAR_4, &VAR_5);
   break;
  case 128:
   VAR_7 = FUNC_10(VAR_6, VAR_4, &VAR_5);
   break;
  default:
   VAR_4->zerr = VAR_0;
   break;
  }

  if (VAR_7 || VAR_4->zerr)
   break;
 }

 (void) FUNC_3(VAR_6);
 (void) FUNC_1(VAR_4->datafd);
 if (VAR_7)
  return ((void *)-1);
 if (VAR_4->zerr) {
  FUNC_0(VAR_4->zerr == VAR_0);
  (void) FUNC_6(VAR_4->errbuf, sizeof (VAR_4->errbuf),
      FUNC_2(VAR_1,
      "Internal error: bad data from diff IOCTL"));
  return ((void *)-1);
 }
 return ((void *)0);
}
