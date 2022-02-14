
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sampleInfo ;
struct TYPE_5__ {int notificationLevel; unsigned int dictID; int compressionLevel; } ;
struct TYPE_4__ {unsigned int k; TYPE_2__ zParams; } ;
typedef TYPE_1__ ZDICT_random_params_t ;
typedef TYPE_2__ ZDICT_params_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 char* VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char const*,int *,unsigned int,TYPE_1__*) ;
 char** FUNC_2 (char const**,unsigned int,char**,unsigned int*,int) ;
 int FUNC_3 (char const**,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 unsigned int VAR_4 ;
 int * FUNC_6 (char const**,unsigned int,size_t,unsigned int,int) ;
 scalar_t__ FUNC_7 (char const**,char*) ;
 scalar_t__ FUNC_8 (int) ;
 unsigned int FUNC_9 (char const**) ;

int FUNC_10(int VAR_5, const char* VAR_6[])
{
  int VAR_7 = 2;
  const char* VAR_8 = VAR_6[0];
  int VAR_9 = 0;


  unsigned VAR_10 = VAR_3;
  const char* VAR_11 = VAR_2;
  unsigned VAR_12 = VAR_1;
  unsigned VAR_13 = VAR_4;


  const char** VAR_14 = (const char**)FUNC_8(VAR_5 * sizeof(const char*));
  unsigned VAR_15 = 0;


  for (int VAR_16 = 1; VAR_16 < VAR_5; VAR_16++) {
    const char* VAR_17 = VAR_6[VAR_16];
    if (FUNC_7(&VAR_17, "k=")) { VAR_10 = FUNC_9(&VAR_17); continue; }
    if (FUNC_7(&VAR_17, "dictID=")) { VAR_12 = FUNC_9(&VAR_17); continue; }
    if (FUNC_7(&VAR_17, "maxdict=")) { VAR_13 = FUNC_9(&VAR_17); continue; }
    if (FUNC_7(&VAR_17, "in=")) {
      VAR_14[VAR_15] = VAR_17;
      VAR_15++;
      continue;
    }
    if (FUNC_7(&VAR_17, "out=")) {
      VAR_11 = VAR_17;
      continue;
    }
    FUNC_0(1, "Incorrect parameters\n");
    VAR_9 = 1;
    return VAR_9;
  }

  char* VAR_18 = ((void*)0);
  unsigned VAR_19 = VAR_15;
  int VAR_20 = 0;
  const char** VAR_21 = ((void*)0);
  VAR_21 = FUNC_2(VAR_14, VAR_15, &VAR_18,
                                        &VAR_19, VAR_20);
  if (VAR_21) {
      unsigned VAR_22;
      for (VAR_22=0; VAR_22<VAR_19; VAR_22++) FUNC_0(4, "%u %s\n", VAR_22, VAR_21[VAR_22]);
      FUNC_4((void*)VAR_14);
      VAR_14 = VAR_21;
      VAR_15 = VAR_19;
  }

  size_t VAR_23 = 0;

  ZDICT_random_params_t VAR_24;
  ZDICT_params_t VAR_25;
  VAR_25.compressionLevel = VAR_0;
  VAR_25.notificationLevel = VAR_7;
  VAR_25.dictID = VAR_12;
  VAR_24.zParams = VAR_25;
  VAR_24.k = VAR_10;

  sampleInfo* VAR_26 = FUNC_6(VAR_14,
                    VAR_15, VAR_23, VAR_13, VAR_25.notificationLevel);
  VAR_9 = FUNC_1(VAR_11, VAR_26, VAR_13, &VAR_24);


  FUNC_3(VAR_21, VAR_18);
  FUNC_5(VAR_26);

  return VAR_9;
}
