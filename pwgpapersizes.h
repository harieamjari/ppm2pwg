#ifndef PWGPAPERSIZES_H
#define PWGPAPERSIZES_H
#include <map>

static std::map<std::string, std::pair<float, float>> PwgPaperSizes =
   {{"asme_f_28x40in",               {711.20,   1016.00}},
    {"iso_2a0_1189x1682mm",          {1189.00,  1682.00}},
    {"iso_a0_841x1189mm",            {841.00,   1189.00}},
    {"iso_a0x3_1189x2523mm",         {1189.00,  2523.00}},
    {"iso_a10_26x37mm",              {26.00,    37.00}},
    {"iso_a1_594x841mm",             {594.00,   841.00}},
    {"iso_a1x3_841x1783mm",          {841.00,   1783.00}},
    {"iso_a1x4_841x2378mm",          {841.00,   2378.00}},
    {"iso_a2_420x594mm",             {420.00,   594.00}},
    {"iso_a2x3_594x1261mm",          {594.00,   1261.00}},
    {"iso_a2x4_594x1682mm",          {594.00,   1682.00}},
    {"iso_a2x5_594x2102mm",          {594.00,   2102.00}},
    {"iso_a3-extra_322x445mm",       {322.00,   445.00}},
    {"iso_a3_297x420mm",             {297.00,   420.00}},
    {"iso_a3x3_420x891mm",           {420.00,   891.00}},
    {"iso_a3x4_420x1189mm",          {420.00,   1189.00}},
    {"iso_a3x5_420x1486mm",          {420.00,   1486.00}},
    {"iso_a3x6_420x1783mm",          {420.00,   1783.00}},
    {"iso_a3x7_420x2080mm",          {420.00,   2080.00}},
    {"iso_a4-extra_235.5x322.3m",    {235.50,   322.30}},
    {"iso_a4-tab_225x297mm",         {225.00,   297.00}},
    {"iso_a4_210x297mm",             {210.00,   297.00}},
    {"iso_a4x3_297x630mm",           {297.00,   630.00}},
    {"iso_a4x4_297x841mm",           {297.00,   841.00}},
    {"iso_a4x5_297x1051mm",          {297.00,   1051.00}},
    {"iso_a4x6_297x1261mm",          {297.00,   1261.00}},
    {"iso_a4x7_297x1471mm",          {297.00,   1471.00}},
    {"iso_a4x8_297x1682mm",          {297.00,   1682.00}},
    {"iso_a4x9_297x1892mm",          {297.00,   1892.00}},
    {"iso_a5-extra_174x235mm",       {174.00,   235.00}},
    {"iso_a5_148x210mm",             {148.00,   210.00}},
    {"iso_a6_105x148mm",             {105.00,   148.00}},
    {"iso_a7_74x105mm",              {74.00,    105.00}},
    {"iso_a8_52x74mm",               {52.00,    74.00}},
    {"iso_a9_37x52mm",               {37.00,    52.00}},
    {"iso_b0_1000x1414mm",           {1000.00,  1414.00}},
    {"iso_b10_31x44mm",              {31.00,    44.00}},
    {"iso_b1_707x1000mm",            {707.00,   1000.00}},
    {"iso_b2_500x707mm",             {500.00,   707.00}},
    {"iso_b3_353x500mm",             {353.00,   500.00}},
    {"iso_b4_250x353mm",             {250.00,   353.00}},
    {"iso_b5-extra_201x276mm",       {201.00,   276.00}},
    {"iso_b5_176x250mm",             {176.00,   250.00}},
    {"iso_b6_125x176mm",             {125.00,   176.00}},
    {"iso_b6c4_125x324mm",           {125.00,   324.00}},
    {"iso_b7_88x125mm",              {88.00,    125.00}},
    {"iso_b8_62x88mm",               {62.00,    88.00}},
    {"iso_b9_44x62mm",               {44.00,    62.00}},
    {"iso_c0_917x1297mm",            {917.00,   1297.00}},
    {"iso_c10_28x40mm",              {28.00,    40.00}},
    {"iso_c1_648x917mm",             {648.00,   917.00}},
    {"iso_c2_458x648mm",             {458.00,   648.00}},
    {"iso_c3_324x458mm",             {324.00,   458.00}},
    {"iso_c4_229x324mm",             {229.00,   324.00}},
    {"iso_c5_162x229mm",             {162.00,   229.00}},
    {"iso_c6_114x162mm",             {114.00,   162.00}},
    {"iso_c6c5_114x229mm",           {114.00,   229.00}},
    {"iso_c7_81x114mm",              {81.00,    114.00}},
    {"iso_c7c6_81x162mm",            {81.00,    162.00}},
    {"iso_c8_57x81mm",               {57.00,    81.00}},
    {"iso_c9_40x57mm",               {40.00,    57.00}},
    {"iso_dl_110x220mm",             {110.00,   220.00}},
    {"iso_id-1_53.98x85.6mm",        {53.98,    85.60}},
    {"iso_id-3_88x125mm",            {88.00,    125.00}},
    {"iso_ra0_860x1220mm",           {860.00,   1220.00}},
    {"iso_ra1_610x860mm",            {610.00,   860.00}},
    {"iso_ra2_430x610mm",            {430.00,   610.00}},
    {"iso_ra3_305x430mm",            {305.00,   430.00}},
    {"iso_ra4_215x305mm",            {215.00,   305.00}},
    {"iso_sra0_900x1280mm",          {900.00,   1280.00}},
    {"iso_sra1_640x900mm",           {640.00,   900.00}},
    {"iso_sra2_450x640mm",           {450.00,   640.00}},
    {"iso_sra3_320x450mm",           {320.00,   450.00}},
    {"iso_sra4_225x320mm",           {225.00,   320.00}},
    {"jis_b0_1030x1456mm",           {1030.00,  1456.00}},
    {"jis_b10_32x45mm",              {32.00,    45.00}},
    {"jis_b1_728x1030mm",            {728.00,   1030.00}},
    {"jis_b2_515x728mm",             {515.00,   728.00}},
    {"jis_b3_364x515mm",             {364.00,   515.00}},
    {"jis_b4_257x364mm",             {257.00,   364.00}},
    {"jis_b5_182x257mm",             {182.00,   257.00}},
    {"jis_b6_128x182mm",             {128.00,   182.00}},
    {"jis_b7_91x128mm",              {91.00,    128.00}},
    {"jis_b8_64x91mm",               {64.00,    91.00}},
    {"jis_b9_45x64mm",               {45.00,    64.00}},
    {"jis_exec_216x330mm",           {216.00,   330.00}},
    {"jpn_chou2_111.1x146mm",        {111.10,   146.00}},
    {"jpn_chou3_120x235mm",          {120.00,   235.00}},
    {"jpn_chou40_90x225mm",          {90.00,    225.00}},
    {"jpn_chou4_90x205mm",           {90.00,    205.00}},
    {"jpn_hagaki_100x148mm",         {100.00,   148.00}},
    {"jpn_kahu_240x322.1mm",         {240.00,   322.10}},
    {"jpn_kaku1_270x382mm",          {270.00,   382.00}},
    {"jpn_kaku2_240x332mm",          {240.00,   332.00}},
    {"jpn_kaku3_216x277mm",          {216.00,   277.00}},
    {"jpn_kaku4_197x267mm",          {197.00,   267.00}},
    {"jpn_kaku5_190x240mm",          {190.00,   240.00}},
    {"jpn_kaku7_142x205mm",          {142.00,   205.00}},
    {"jpn_kaku8_119x197mm",          {119.00,   197.00}},
    {"jpn_oufuku_148x200mm",         {148.00,   200.00}},
    {"jpn_you4_105x235mm",           {105.00,   235.00}},
    {"na_10x11_10x11in",             {254.00,   279.40}},
    {"na_10x13_10x13in",             {254.00,   330.20}},
    {"na_10x14_10x14in",             {254.00,   355.60}},
    {"na_10x15_10x15in",             {254.00,   381.00}},
    {"na_11x12_11x12in",             {279.40,   304.80}},
    {"na_11x15_11x15in",             {279.40,   381.00}},
    {"na_12x19_12x19in",             {304.80,   482.60}},
    {"na_5x7_5x7in",                 {127.00,   177.80}},
    {"na_6x9_6x9in",                 {152.40,   228.60}},
    {"na_7x9_7x9in",                 {177.80,   228.60}},
    {"na_9x11_9x11in",               {228.60,   279.40}},
    {"na_a2_4.375x5.75in",           {111.12,   146.05}},
    {"na_arch-a_9x12in",             {228.60,   304.80}},
    {"na_arch-b_12x18in",            {304.80,   457.20}},
    {"na_arch-c_18x24in",            {457.20,   609.60}},
    {"na_arch-d_24x36in",            {609.60,   914.40}},
    {"na_arch-e2_26x38in",           {660.40,   965.20}},
    {"na_arch-e3_27x39in",           {685.80,   990.60}},
    {"na_arch-e_36x48in",            {914.40,   1219.20}},
    {"na_b-plus_12x19.17in",         {304.80,   486.92}},
    {"na_c5_6.5x9.5in",              {165.10,   241.30}},
    {"na_c_17x22in",                 {431.80,   558.80}},
    {"na_d_22x34in",                 {558.80,   863.60}},
    {"na_e_34x44in",                 {863.60,   1117.60}},
    {"na_edp_11x14in",               {279.40,   355.60}},
    {"na_eur-edp_12x14in",           {304.80,   355.60}},
    {"na_executive_7.25x10.5in",     {184.15,   266.70}},
    {"na_f_44x68in",                 {1117.60,  1727.20}},
    {"na_fanfold-eur_8.5x12in",      {215.90,   304.80}},
    {"na_fanfold-us_11x14.875in",    {279.40,   377.82}},
    {"na_foolscap_8.5x13in",         {215.90,   330.20}},
    {"na_govt-legal_8x13in",         {203.20,   330.20}},
    {"na_govt-letter_8x10in",        {203.20,   254.00}},
    {"na_index-3x5_3x5in",           {76.20,    127.00}},
    {"na_index-4x6-ext_6x8in",       {152.40,   203.20}},
    {"na_index-4x6_4x6in",           {101.60,   152.40}},
    {"na_index-5x8_5x8in",           {127.00,   203.20}},
    {"na_invoice_5.5x8.5in",         {139.70,   215.90}},
    {"na_ledger_11x17in",            {279.40,   431.80}},
    {"na_legal-extra_9.5x15in",      {241.30,   381.00}},
    {"na_legal_8.5x14in",            {215.90,   355.60}},
    {"na_letter-extra_9.5x12in",     {241.30,   304.80}},
    {"na_letter-plus_8.5x12.69in",   {215.90,   322.33}},
    {"na_letter_8.5x11in",           {215.90,   279.40}},
    {"na_monarch_3.875x7.5in",       {98.42,    190.50}},
    {"na_number-10_4.125x9.5in",     {104.77,   241.30}},
    {"na_number-11_4.5x10.375in",    {114.30,   263.52}},
    {"na_number-12_4.75x11in",       {120.65,   279.40}},
    {"na_number-14_5x11.5in",        {127.00,   292.10}},
    {"na_number-9_3.875x8.875in",    {98.42,    225.42}},
    {"na_oficio_8.5x13.4in",         {215.90,   340.36}},
    {"na_personal_3.625x6.5in",      {92.07,    165.10}},
    {"na_quarto_8.5x10.83in",        {215.90,   275.08}},
    {"na_super-a_8.94x14in",         {227.08,   355.60}},
    {"na_super-b_13x19in",           {330.20,   482.60}},
    {"na_wide-format_30x42in",       {762.00,   1066.80}},
    {"oe_12x16_12x16in",             {304.80,   406.40}},
    {"oe_14x17_14x17in",             {355.60,   431.80}},
    {"oe_18x22_18x22in",             {457.20,   558.80}},
    {"oe_a2plus_17x24in",            {431.80,   609.60}},
    {"oe_business-card_2x3.5in",     {50.80,    88.90}},
    {"oe_photo-10r_10x12in",         {254.00,   304.80}},
    {"oe_photo-20r_20x24in",         {508.00,   609.60}},
    {"oe_photo-l_3.5x5in",           {88.90,    127.00}},
    {"oe_photo-s10r_10x15in",        {254.00,   381.00}},
    {"oe_square-photo_4x4in",        {101.60,   101.60}},
    {"oe_square-photo_5x5in",        {127.00,   127.00}},
    {"om_16k_184x260mm",             {184.00,   260.00}},
    {"om_16k_195x270mm",             {195.00,   270.00}},
    {"om_business-card_55x85mm",     {55.00,    85.00}},
    {"om_business-card_55x91mm",     {55.00,    91.00}},
    {"om_card_54x86mm",              {54.00,    86.00}},
    {"om_dai-pa-kai_275x395mm",      {275.00,   395.00}},
    {"om_dsc-photo_89x119mm",        {89.00,    119.00}},
    {"om_folio-sp_215x315mm",        {215.00,   315.00}},
    {"om_folio_210x330mm",           {210.00,   330.00}},
    {"om_invite_220x220mm",          {220.00,   220.00}},
    {"om_italian_110x230mm",         {110.00,   230.00}},
    {"om_juuro-ku-kai_198x275mm",    {198.00,   275.00}},
    {"om_large-photo_200x300",       {200.00,   300.00}},
    {"om_medium-photo_130x180mm",    {130.00,   180.00}},
    {"om_pa-kai_267x389mm",          {267.00,   389.00}},
    {"om_postfix_114x229mm",         {114.00,   229.00}},
    {"om_small-photo_100x150mm",     {100.00,   150.00}},
    {"om_square-photo_89x89mm",      {89.00,    89.00}},
    {"om_wide-photo_100x200mm",      {100.00,   200.00}},
    {"prc_10_324x458mm",             {324.00,   458.00}},
    {"prc_16k_146x215mm",            {146.00,   215.00}},
    {"prc_1_102x165mm",              {102.00,   165.00}},
    {"prc_2_102x176mm",              {102.00,   176.00}},
    {"prc_32k_97x151mm",             {97.00,    151.00}},
    {"prc_3_125x176mm",              {125.00,   176.00}},
    {"prc_4_110x208mm",              {110.00,   208.00}},
    {"prc_5_110x220mm",              {110.00,   220.00}},
    {"prc_6_120x320mm",              {120.00,   320.00}},
    {"prc_7_160x230mm",              {160.00,   230.00}},
    {"prc_8_120x309mm",              {120.00,   309.00}},
    {"roc_16k_7.75x10.75in",         {196.85,   273.05}},
    {"roc_8k_10.75x15.5in",          {273.05,   393.70}}};

#endif // PWGPAPERSIZES_H
