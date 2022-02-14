
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nbSamples; size_t* samplesSizes; void* srcBuffer; } ;
typedef TYPE_1__ sampleInfo ;
struct TYPE_6__ {int nbSamples; size_t const totalSizeToLoad; scalar_t__ oneSampleTooLarge; } ;
typedef TYPE_2__ fileStats ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (unsigned long long,size_t const) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t const FUNC_3 (size_t const) ;
 TYPE_2__ FUNC_4 (char const**,unsigned int,size_t,unsigned int const) ;
 unsigned int FUNC_5 (void* const,size_t*,size_t* const,int,char const**,unsigned int,size_t,unsigned int const) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (char const**,unsigned int) ;

sampleInfo* FUNC_8(const char** VAR_3, unsigned VAR_4, size_t VAR_5,
                          unsigned VAR_6, const unsigned VAR_7) {
    fileStats const VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7);
    size_t* const VAR_9 = (size_t*)FUNC_6(VAR_8.nbSamples * sizeof(size_t));
    size_t const VAR_10 = VAR_1;
    size_t const VAR_11 = FUNC_3(VAR_8.totalSizeToLoad * VAR_10) / VAR_10;
    size_t VAR_12 = (size_t) FUNC_2 ((unsigned long long)VAR_11, VAR_8.totalSizeToLoad);
    void* const VAR_13 = FUNC_6(VAR_12+VAR_0);


    if ((!VAR_9) || (!VAR_13))
        FUNC_1(12, "not enough memory for trainFromFiles");
    if (VAR_8.oneSampleTooLarge) {
        FUNC_0(2, "!  Warning : some sample(s) are very large \n");
        FUNC_0(2, "!  Note that dictionary is only useful for small samples. \n");
        FUNC_0(2, "!  As a consequence, only the first %u bytes of each sample are loaded \n", VAR_2);
    }
    if (VAR_8.nbSamples < 5) {
        FUNC_0(2, "!  Warning : nb of samples too low for proper processing ! \n");
        FUNC_0(2, "!  Please provide _one file per sample_. \n");
        FUNC_0(2, "!  Alternatively, split files into fixed-size blocks representative of samples, with -B# \n");
        FUNC_1(14, "nb of samples too low");
    }
    if (VAR_8.totalSizeToLoad < (unsigned long long)(8 * VAR_6)) {
        FUNC_0(2, "!  Warning : data size of samples too small for target dictionary size \n");
        FUNC_0(2, "!  Samples should be about 100x larger than target dictionary size \n");
    }


    if (VAR_12 < VAR_8.totalSizeToLoad)
        FUNC_0(1, "Not enough memory; training on %u MB only...\n", (unsigned)(VAR_12 >> 20));


    FUNC_0(3, "Shuffling input files\n");
    FUNC_7(VAR_3, VAR_4);
    VAR_4 = FUNC_5(VAR_13, &VAR_12, VAR_9, VAR_8.nbSamples,
                        VAR_3, VAR_4, VAR_5, VAR_7);

    sampleInfo *VAR_14 = (sampleInfo *)FUNC_6(sizeof(sampleInfo));

    VAR_14->nbSamples = VAR_8.nbSamples;
    VAR_14->samplesSizes = VAR_9;
    VAR_14->srcBuffer = VAR_13;

    return VAR_14;
}
