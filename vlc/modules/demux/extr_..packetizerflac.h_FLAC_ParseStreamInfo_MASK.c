
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct flac_stream_info {int min_framesize; int max_framesize; int sample_rate; int channels; int bits_per_sample; int total_samples; void* max_blocksize; void* min_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (void*,int,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static inline void FUNC_6( const uint8_t *VAR_1,
                                         struct flac_stream_info *VAR_2 )
{
    VAR_2->min_blocksize = FUNC_2( &VAR_1[0] );
    VAR_2->min_blocksize = FUNC_4( VAR_2->min_blocksize, 16, 65535 );

    VAR_2->max_blocksize = FUNC_2( &VAR_1[2] );
    VAR_2->max_blocksize = FUNC_4( VAR_2->max_blocksize, 16, 65535 );

    VAR_2->min_framesize = FUNC_0( &VAR_1[3] ) & 0x00FFFFFF;
    VAR_2->min_framesize = FUNC_5( VAR_2->min_framesize, VAR_0 );

    VAR_2->max_framesize = FUNC_0( &VAR_1[6] ) & 0x00FFFFFF;

    VAR_2->sample_rate = FUNC_0( &VAR_1[10] ) >> 12;
    VAR_2->channels = (VAR_1[12] & 0x0F >> 1) + 1;
    VAR_2->bits_per_sample = (((VAR_1[12] & 0x01) << 4) | VAR_1[13] >> 4) + 1;

    VAR_2->total_samples = FUNC_1(&VAR_1[4+6]) & ((FUNC_3(1)<<36)-1);
}
