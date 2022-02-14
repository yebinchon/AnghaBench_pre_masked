
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sampleInfo ;
struct TYPE_4__ {int notificationLevel; unsigned int dictID; int compressionLevel; } ;
typedef TYPE_1__ ZDICT_params_t ;
struct TYPE_5__ {unsigned int k; unsigned int d; unsigned int f; unsigned int steps; unsigned int nbThreads; double splitPoint; TYPE_1__ zParams; } ;
typedef TYPE_2__ ZDICT_fastCover_params_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char const*,int *,unsigned int,TYPE_2__*) ;
 char** FUNC_2 (char const**,unsigned int,char**,unsigned int*,int) ;
 int FUNC_3 (char const**,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 unsigned int VAR_1 ;
 int * FUNC_6 (char const**,unsigned int,size_t,unsigned int,int) ;
 scalar_t__ FUNC_7 (char const**,char*) ;
 scalar_t__ FUNC_8 (int) ;
 unsigned int FUNC_9 (char const**) ;

int FUNC_10(int VAR_2, const char* VAR_3[])
{
  int VAR_4 = 2;
  const char* VAR_5 = VAR_3[0];
  int VAR_6 = 0;


  unsigned VAR_7 = 0;
  unsigned VAR_8 = 0;
  unsigned VAR_9 = 23;
  unsigned VAR_10 = 32;
  unsigned VAR_11 = 1;
  unsigned VAR_12 = 100;
  const char* VAR_13 = "fastCoverDict";
  unsigned VAR_14 = 0;
  unsigned VAR_15 = VAR_1;


  const char** VAR_16 = (const char**)FUNC_8(VAR_2 * sizeof(const char*));
  unsigned VAR_17 = 0;

  char* VAR_18 = ((void*)0);
  unsigned VAR_19 = VAR_17;
  int VAR_20 = 0;
  const char** VAR_21 = ((void*)0);


  for (int VAR_22 = 1; VAR_22 < VAR_2; VAR_22++) {
    const char* VAR_23 = VAR_3[VAR_22];
    if (FUNC_7(&VAR_23, "k=")) { VAR_7 = FUNC_9(&VAR_23); continue; }
    if (FUNC_7(&VAR_23, "d=")) { VAR_8 = FUNC_9(&VAR_23); continue; }
    if (FUNC_7(&VAR_23, "f=")) { VAR_9 = FUNC_9(&VAR_23); continue; }
    if (FUNC_7(&VAR_23, "steps=")) { VAR_10 = FUNC_9(&VAR_23); continue; }
    if (FUNC_7(&VAR_23, "split=")) { VAR_12 = FUNC_9(&VAR_23); continue; }
    if (FUNC_7(&VAR_23, "dictID=")) { VAR_14 = FUNC_9(&VAR_23); continue; }
    if (FUNC_7(&VAR_23, "maxdict=")) { VAR_15 = FUNC_9(&VAR_23); continue; }
    if (FUNC_7(&VAR_23, "in=")) {
      VAR_16[VAR_17] = VAR_23;
      VAR_17++;
      continue;
    }
    if (FUNC_7(&VAR_23, "out=")) {
      VAR_13 = VAR_23;
      continue;
    }
    FUNC_0(1, "Incorrect parameters\n");
    VAR_6 = 1;
    return VAR_6;
  }


  VAR_21 = FUNC_2(VAR_16, VAR_17, &VAR_18,
                                        &VAR_19, VAR_20);
  if (VAR_21) {
      unsigned VAR_24;
      for (VAR_24=0; VAR_24<VAR_19; VAR_24++) FUNC_0(4, "%u %s\n", VAR_24, VAR_21[VAR_24]);
      FUNC_4((void*)VAR_16);
      VAR_16 = VAR_21;
      VAR_17 = VAR_19;
  }

  size_t VAR_25 = 0;


  ZDICT_params_t VAR_26;
  VAR_26.compressionLevel = VAR_0;
  VAR_26.notificationLevel = VAR_4;
  VAR_26.dictID = VAR_14;


  ZDICT_fastCover_params_t VAR_27;
  VAR_27.zParams = VAR_26;
  VAR_27.k = VAR_7;
  VAR_27.d = VAR_8;
  VAR_27.f = VAR_9;
  VAR_27.steps = VAR_10;
  VAR_27.nbThreads = VAR_11;
  VAR_27.splitPoint = (double)VAR_12/100;


  sampleInfo* VAR_28 = FUNC_6(VAR_16,
                    VAR_17, VAR_25, VAR_15, VAR_26.notificationLevel);
  VAR_6 = FUNC_1(VAR_13, VAR_28, VAR_15, &VAR_27);


  FUNC_3(VAR_21, VAR_18);
  FUNC_5(VAR_28);

  return VAR_6;
}
