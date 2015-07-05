//*******************************************************************************//*	rowmand.jhf		Rowmand Triplex//*	formated for use with Arduino Processing //*	by Mark Sproul//*******************************************************************************//*	Jan 10,	2010	<MLS>	Formated Hershey RowmanTriplex for Arduino//*******************************************************************************//#include	"HersheyRowmanTriplex.h"prog_char	gRowmanTri_00[]	PROGMEM	=	"Rowman Triplex";prog_char	gRowmanTri_20[]	PROGMEM	=	" 1JZ";prog_char	gRowmanTri_21[]	PROGMEM	=	"34MXRFQGQIRQ RRFRTST RRFSFST RSFTGTISQ RRXQYQZR[S[TZTYSXRX RRYRZSZSYRY";prog_char	gRowmanTri_22[]	PROGMEM	=	"22I[NFMGMM RNGMM RNFOGMM RWFVGVM RWGVM RWFXGVM";prog_char	gRowmanTri_23[]	PROGMEM	=	"12H]SFLb RYFRb RLQZQ RKWYW";prog_char	gRowmanTri_24[]	PROGMEM	=	"56H\\PBP_ RTBT_ RXKXJWJWLYLYJXHWGTFPFMGKIKLLNOPURWSXUXXWZ RLLMNOOUQWRXT RMGLILKMMONUPXRYTYWXYWZT[P[MZLYKWKUMUMWLWLV";prog_char	gRowmanTri_25[]	PROGMEM	=	"32F^[FI[ RNFPHPJOLMMKMIKIIJGLFNFPGSHVHYG[F RWTUUTWTYV[X[ZZ[X[VYTWT";prog_char	gRowmanTri_26[]	PROGMEM	=	"74E_[O[NZNZP\\P\\N[MZMYNXPVUTXRZP[L[JZIXIUJSPORMSKSIRGPFNGMIMLNOPRTWWZY[[[\\Y\\X RKZJXJUKSLR RRMSI RSKRG RNGMK RNNPQTVWYYZ RN[LZKXKULSPO RMINMQQUVXYZZ[Z\\Y";prog_char	gRowmanTri_27[]	PROGMEM	=	"24MXTHSIRIQHQGRFSFTGTJSLQM RRGRHSHSGRG RSITJ RTHSL";prog_char	gRowmanTri_28[]	PROGMEM	=	"27KYUBSDQGOKNPNTOYQ]S`Ub RQHPKOOOUPYQ\\ RSDRFQIPOPUQ[R^S`";prog_char	gRowmanTri_29[]	PROGMEM	=	"27KYOBQDSGUKVPVTUYS]Q`Ob RSHTKUOUUTYS\\ RQDRFSITOTUS[R^Q`";prog_char	gRowmanTri_2A[]	PROGMEM	=	"39JZRFQGSQRR RRFRR RRFSGQQRR RMINIVOWO RMIWO RMIMJWNWO RWIVINOMO RWIMO RWIWJMNMO";prog_char	gRowmanTri_2B[]	PROGMEM	=	"16F_RIRZSZ RRISISZ RJQ[Q[R RJQJR[R";prog_char	gRowmanTri_2C[]	PROGMEM	=	"24MXTZS[R[QZQYRXSXTYT\\S^Q_ RRYRZSZSYRY RS[T\\ RTZS^";prog_char	gRowmanTri_2D[]	PROGMEM	=	" 8F_JQ[Q[R RJQJR[R";prog_char	gRowmanTri_2E[]	PROGMEM	=	"16MXRXQYQZR[S[TZTYSXRX RRYRZSZSYRY";prog_char	gRowmanTri_2F[]	PROGMEM	=	" 8G^[BIbJb R[B\\BJb";prog_char	gRowmanTri_30[]	PROGMEM	=	"50H\\QFNGLJKOKRLWNZQ[S[VZXWYRYOXJVGSFQF RNHMJLNLSMWNY RVYWWXSXNWJVH RQFOGNIMNMSNXOZQ[ RS[UZVXWSWNVIUGSF";prog_char	gRowmanTri_31[]	PROGMEM	=	"28H\\QHQ[ RRHRZ RSFS[ RSFPINJ RM[W[ RQZO[ RQYP[ RSYT[ RSZU[";prog_char	gRowmanTri_32[]	PROGMEM	=	"62H\\LJLKMKMJLJ RLIMINJNKMLLLKKKJLHMGPFTFWGXHYJYLXNUPPRNSLUKXK[ RWHXJXLWN RTFVGWJWLVNTPPR RKYLXNXSYWYYX RNXSZWZXY RNXS[W[XZYXYV";prog_char	gRowmanTri_33[]	PROGMEM	=	"76H\\LJLKMKMJLJ RLIMINJNKMLLLKKKJLHMGPFTFWGXIXLWNTO RVGWIWLVN RSFUGVIVLUNSO RQOTOVPXRYTYWXYWZT[P[MZLYKWKVLUMUNVNWMXLX RWRXTXWWY RSOUPVQWTWWVZT[ RLVLWMWMVLV";prog_char	gRowmanTri_34[]	PROGMEM	=	"28H\\SIS[ RTHTZ RUFU[ RUFJUZU RP[X[ RSZQ[ RSYR[ RUYV[ RUZW[";prog_char	gRowmanTri_35[]	PROGMEM	=	"55H\\MFKPMNPMSMVNXPYSYUXXVZS[P[MZLYKWKVLUMUNVNWMXLX RWPXRXVWX RSMUNVOWRWVVYUZS[ RLVLWMWMVLV RMFWF RMGUG RMHQHUGWF";prog_char	gRowmanTri_36[]	PROGMEM	=	"69H\\VIVJWJWIVI RWHVHUIUJVKWKXJXIWGUFRFOGMILKKOKULXNZQ[S[VZXXYUYTXQVOSNQNOONPMR RNIMKLOLUMXNY RWXXVXSWQ RRFPGOHNJMNMUNXOZQ[ RS[UZVYWVWSVPUOSN";prog_char	gRowmanTri_37[]	PROGMEM	=	"43H\\KFKL RYFYIXLTQSSRWR[ RSRRTQWQ[ RXLSQQTPWP[R[ RKJLHNFPFUIWIXHYF RMHNGPGRH RKJLINHPHUI";prog_char	gRowmanTri_38[]	PROGMEM	=	"79H\\PFMGLILLMNPOTOWNXLXIWGTFPF RNGMIMLNN RVNWLWIVG RPFOGNINLONPO RTOUNVLVIUGTF RPOMPLQKSKWLYMZP[T[WZXYYWYSXQWPTO RMQLSLWMY RWYXWXSWQ RPONPMSMWNZP[ RT[VZWWWSVPTO";prog_char	gRowmanTri_39[]	PROGMEM	=	"69H\\MWMXNXNWMW RWOVQURSSQSNRLPKMKLLINGQFSFVGXIYLYRXVWXUZR[O[MZLXLWMVNVOWOXNYMY RMPLNLKMI RVHWIXLXRWVVX RQSORNQMNMKNHOGQF RSFUGVIWLWSVWUYTZR[";prog_char	gRowmanTri_3A[]	PROGMEM	=	"32MXRMQNQORPSPTOTNSMRM RRNROSOSNRN RRXQYQZR[S[TZTYSXRX RRYRZSZSYRY";prog_char	gRowmanTri_3B[]	PROGMEM	=	"40MXRMQNQORPSPTOTNSMRM RRNROSOSNRN RTZS[R[QZQYRXSXTYT\\S^Q_ RRYRZSZSYRY RS[T\\ RTZS^";prog_char	gRowmanTri_3C[]	PROGMEM	=	" 4F^ZIJRZ[";prog_char	gRowmanTri_3D[]	PROGMEM	=	"16F_JM[M[N RJMJN[N RJU[U[V RJUJV[V";prog_char	gRowmanTri_3E[]	PROGMEM	=	" 4F^JIZRJ[";prog_char	gRowmanTri_3F[]	PROGMEM	=	"52I\\MKMJNJNLLLLJMHNGPFTFWGXHYJYLXNWOSQ RWHXIXMWN RTFVGWIWMVOUP RRQRTSTSQRQ RRXQYQZR[S[TZTYSXRX RRYRZSZSYRY";prog_char	gRowmanTri_40[]	PROGMEM	=	"56E`WNVLTKQKOLNMMPMSNUPVSVUUVS RQKOMNPNSOUPV RWKVSVUXVZV\\T]Q]O\\L[JYHWGTFQFNGLHJJILHOHRIUJWLYNZQ[T[WZYYZX RXKWSWUXV";prog_char	gRowmanTri_41[]	PROGMEM	=	"36H\\RFKZ RQIW[ RRIX[ RRFY[ RMUVU RI[O[ RT[[[ RKZJ[ RKZM[ RWZU[ RWYV[ RXYZ[";prog_char	gRowmanTri_42[]	PROGMEM	=	"78G]LFL[ RMGMZ RNFN[ RIFUFXGYHZJZLYNXOUP RXHYJYLXN RUFWGXIXMWOUP RNPUPXQYRZTZWYYXZU[I[ RXRYTYWXY RUPWQXSXXWZU[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";prog_char	gRowmanTri_43[]	PROGMEM	=	"37G\\XIYFYLXIVGTFQFNGLIKKJNJSKVLXNZQ[T[VZXXYV RMILKKNKSLVMX RQFOGMJLNLSMWOZQ[";prog_char	gRowmanTri_44[]	PROGMEM	=	"62G]LFL[ RMGMZ RNFN[ RIFSFVGXIYKZNZSYVXXVZS[I[ RWIXKYNYSXVWX RSFUGWJXNXSWWUZS[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";prog_char	gRowmanTri_45[]	PROGMEM	=	"83G\\LFL[ RMGMZ RNFN[ RIFYFYL RNPTP RTLTT RI[Y[YU RJFLG RKFLH ROFNH RPFNG RTFYG RVFYH RWFYI RXFYL RTLSPTT RTNRPTR RTOPPTQ RLZJ[ RLYK[ RNYO[ RNZP[ RT[YZ RV[YY RW[YX RX[YU";prog_char	gRowmanTri_46[]	PROGMEM	=	"70G[LFL[ RMGMZ RNFN[ RIFYFYL RNPTP RTLTT RI[Q[ RJFLG RKFLH ROFNH RPFNG RTFYG RVFYH RWFYI RXFYL RTLSPTT RTNRPTR RTOPPTQ RLZJ[ RLYK[ RNYO[ RNZP[";prog_char	gRowmanTri_47[]	PROGMEM	=	"60G^XIYFYLXIVGTFQFNGLIKKJNJSKVLXNZQ[T[VZXZY[YS RMILKKNKSLVMX RQFOGMJLNLSMWOZQ[ RXTXY RWSWYVZ RTS\\S RUSWT RVSWU RZSYU R[SYT";prog_char	gRowmanTri_48[]	PROGMEM	=	"81F^KFK[ RLGLZ RMFM[ RWFW[ RXGXZ RYFY[ RHFPF RTF\\F RMPWP RH[P[ RT[\\[ RIFKG RJFKH RNFMH ROFMG RUFWG RVFWH RZFYH R[FYG RKZI[ RKYJ[ RMYN[ RMZO[ RWZU[ RWYV[ RYYZ[ RYZ[[";prog_char	gRowmanTri_49[]	PROGMEM	=	"39LXQFQ[ RRGRZ RSFS[ RNFVF RN[V[ ROFQG RPFQH RTFSH RUFSG RQZO[ RQYP[ RSYT[ RSZU[";prog_char	gRowmanTri_4A[]	PROGMEM	=	"45JJSFSWRZQ[ RTGTWSZ RUFUWTZQ[O[MZLXLVMUNUOVOWNXMX RMVMWNWNVMV RPFXF RQFSG RRFSH RVFUH RWFUG";prog_char	gRowmanTri_4B[]	PROGMEM	=	"69F\\KFK[ RLGLZ RMFM[ RXGMR RPPW[ RQPX[ RQNY[ RHFPF RUF[F RH[P[ RT[[[ RIFKG RJFKH RNFMH ROFMG RWFXG RZFXG RKZI[ RKYJ[ RMYN[ RMZO[ RWYU[ RWYZ[";prog_char	gRowmanTri_4C[]	PROGMEM	=	"52I[NFN[ ROGOZ RPFP[ RKFSF RK[Z[ZU RLFNG RMFNH RQFPH RRFPG RNZL[ RNYM[ RPYQ[ RPZR[ RU[ZZ RW[ZY RX[ZX RY[ZU";prog_char	gRowmanTri_4D[]	PROGMEM	=	"63E_JFJZ RJFQ[ RKFQX RLFRX RXFQ[ RXFX[ RYGYZ RZFZ[ RGFLF RXF]F RG[M[ RU[][ RHFJG R[FZH R\\FZG RJZH[ RJZL[ RXZV[ RXYW[ RZY[[ RZZ\\[";prog_char	gRowmanTri_4E[]	PROGMEM	=	"39F^KFKZ RKFY[ RLFXX RMFYX RYGY[ RHFMF RVF\\F RH[N[ RIFKG RWFYG R[FYG RKZI[ RKZM[";prog_char	gRowmanTri_4F[]	PROGMEM	=	"54G]QFNGLIKKJOJRKVLXNZQ[S[VZXXYVZRZOYKXIVGSFQF RMILKKNKSLVMX RWXXVYSYNXKWI RQFOGMJLNLSMWOZQ[ RS[UZWWXSXNWJUGSF";prog_char	gRowmanTri_50[]	PROGMEM	=	"59G]LFL[ RMGMZ RNFN[ RIFUFXGYHZJZMYOXPUQNQ RXHYJYMXO RUFWGXIXNWPUQ RI[Q[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";prog_char	gRowmanTri_51[]	PROGMEM	=	"77G]QFNGLIKKJOJRKVLXNZQ[S[VZXXYVZRZOYKXIVGSFQF RMILKKNKSLVMX RWXXVYSYNXKWI RQFOGMJLNLSMWOZQ[ RS[UZWWXSXNWJUGSF RNXOVQURUTVUXV^W`Y`Z^Z\\ RV\\W^X_Y_ RUXW]X^Y^Z]";prog_char	gRowmanTri_52[]	PROGMEM	=	"80G]LFL[ RMGMZ RNFN[ RIFUFXGYHZJZLYNXOUPNP RXHYJYLXN RUFWGXIXMWOUP RRPTQUSWYX[Z[[Y[W RWWXYYZZZ RTQURXXYYZY[X RI[Q[ RJFLG RKFLH ROFNH RPFNG RLZJ[ RLYK[ RNYO[ RNZP[";prog_char	gRowmanTri_53[]	PROGMEM	=	"44H\\XIYFYLXIVGSFPFMGKIKLLNOPURWSXUXXWZ RLLMNOOUQWRXT RMGLILKMMONUPXRYTYWXYWZT[Q[NZLXKUK[LX";prog_char	gRowmanTri_54[]	PROGMEM	=	"57H\\JFJL RQFQ[ RRGRZ RSFS[ RZFZL RJFZF RN[V[ RKFJL RLFJI RMFJH ROFJG RUFZG RWFZH RXFZI RYFZL RQZO[ RQYP[ RSYT[ RSZU[";prog_char	gRowmanTri_55[]	PROGMEM	=	"45F^KFKULXNZQ[S[VZXXYUYG RLGLVMX RMFMVNYOZQ[ RHFPF RVF\\F RIFKG RJFKH RNFMH ROFMG RWFYG R[FYG";prog_char	gRowmanTri_56[]	PROGMEM	=	"34H\\KFR[ RLFRXR[ RMFSX RYGR[ RIFPF RUF[F RJFLH RNFMH ROFMG RWFYG RZFYG";prog_char	gRowmanTri_57[]	PROGMEM	=	"55F^JFN[ RKFNVN[ RLFOV RRFOVN[ RRFV[ RSFVVV[ RTFWV RZGWVV[ RGFOF RRFTF RWF]F RHFKG RIFKH RMFLH RNFLG RXFZG R\\FZG";prog_char	gRowmanTri_58[]	PROGMEM	=	"54H\\KFW[ RLFX[ RMFY[ RXGLZ RIFPF RUF[F RI[O[ RT[[[ RJFMH RNFMH ROFMG RVFXG RZFXG RLZJ[ RLZN[ RWZU[ RWYV[ RWYZ[";prog_char	gRowmanTri_59[]	PROGMEM	=	"48G]JFQQQ[ RKFRQRZ RLFSQS[ RYGSQ RHFOF RVF\\F RN[V[ RIFKG RNFLG RWFYG R[FYG RQZO[ RQYP[ RSYT[ RSZU[";prog_char	gRowmanTri_5A[]	PROGMEM	=	"41H\\YFKFKL RWFK[ RXFL[ RYFM[ RK[Y[YU RLFKL RMFKI RNFKH RPFKG RT[YZ RV[YY RW[YX RX[YU";prog_char	gRowmanTri_5B[]	PROGMEM	=	"12KYOBOb RPBPb ROBVB RObVb";prog_char	gRowmanTri_5C[]	PROGMEM	=	" 3KYKFY^";prog_char	gRowmanTri_5D[]	PROGMEM	=	"12KYTBTb RUBUb RNBUB RNbUb";prog_char	gRowmanTri_5E[]	PROGMEM	=	"11JZPLRITL RMORJWO RRJR[";prog_char	gRowmanTri_5F[]	PROGMEM	=	" 3JZJ]Z]";prog_char	gRowmanTri_60[]	PROGMEM	=	"24MXTFRGQIQLRMSMTLTKSJRJQK RRKRLSLSKRK RRGQK RQIRJ";prog_char	gRowmanTri_61[]	PROGMEM	=	"54I]NPNOOOOQMQMONNPMTMVNWOXQXXYZZ[ RVOWQWXXZ RTMUNVPVXWZZ[[[ RVRUSPTMULWLXMZP[S[UZVX RNUMWMXNZ RUSQTOUNWNXOZP[";prog_char	gRowmanTri_62[]	PROGMEM	=	"47G\\LFL[MZOZ RMGMY RIFNFNZ RNPONQMSMVNXPYSYUXXVZS[Q[OZNX RWPXRXVWX RSMUNVOWRWVVYUZS[ RJFLG RKFLH";prog_char	gRowmanTri_63[]	PROGMEM	=	"34H[WQWPVPVRXRXPVNTMQMNNLPKSKULXNZQ[S[VZXX RMPLRLVMX RQMONNOMRMVNYOZQ[";prog_char	gRowmanTri_64[]	PROGMEM	=	"52H]VFV[[[ RWGWZ RSFXFX[ RVPUNSMQMNNLPKSKULXNZQ[S[UZVX RMPLRLVMX RQMONNOMRMVNYOZQ[ RTFVG RUFVH RXYY[ RXZZ[";prog_char	gRowmanTri_65[]	PROGMEM	=	"41H[MSXSXQWOVNSMQMNNLPKSKULXNZQ[S[VZXX RWRWQVO RMPLRLVMX RVSVPUNSM RQMONNOMRMVNYOZQ[";prog_char	gRowmanTri_66[]	PROGMEM	=	"40KYWHWGVGVIXIXGWFTFRGQHPKP[ RRHQKQZ RTFSGRIR[ RMMVM RM[U[ RPZN[ RPYO[ RRYS[ RRZT[";prog_char	gRowmanTri_67[]	PROGMEM	=	"89I\\XNYOZNYMXMVNUO RQMONNOMQMSNUOVQWSWUVVUWSWQVOUNSMQM ROONQNSOU RUUVSVQUO RQMPNOPOTPVQW RSWTVUTUPTNSM RNUMVLXLYM[N\\Q]U]X^Y_ RN[Q\\U\\X] RLYMZP[U[X\\Y^Y_XaUbObLaK_K^L\\O[ RObMaL_L^M\\O[";prog_char	gRowmanTri_68[]	PROGMEM	=	"65G^LFL[ RMGMZ RIFNFN[ RNQOOPNRMUMWNXOYRY[ RWOXRXZ RUMVNWQW[ RI[Q[ RT[\\[ RJFLG RKFLH RLZJ[ RLYK[ RNYO[ RNZP[ RWZU[ RWYV[ RYYZ[ RYZ[[";prog_char	gRowmanTri_69[]	PROGMEM	=	"43LXQFQHSHSFQF RRFRH RQGSG RQMQ[ RRNRZ RNMSMS[ RN[V[ ROMQN RPMQO RQZO[ RQYP[ RSYT[ RSZU[";prog_char	gRowmanTri_6A[]	PROGMEM	=	"41KXRFRHTHTFRF RSFSH RRGTG RRMR^QaPb RSNS]R` ROMTMT]S`RaPbMbLaL_N_NaMaM` RPMRN RQMRO";prog_char	gRowmanTri_6B[]	PROGMEM	=	"61G]LFL[ RMGMZ RIFNFN[ RWNNW RRSY[ RRTX[ RQTW[ RTM[M RI[Q[ RT[[[ RJFLG RKFLH RUMWN RZMWN RLZJ[ RLYK[ RNYO[ RNZP[ RWYU[ RVYZ[";prog_char	gRowmanTri_6C[]	PROGMEM	=	"31LXQFQ[ RRGRZ RNFSFS[ RN[V[ ROFQG RPFQH RQZO[ RQYP[ RSYT[ RSZU[";prog_char	gRowmanTri_6D[]	PROGMEM	=	"99AcFMF[ RGNGZ RCMHMH[ RHQIOJNLMOMQNROSRS[ RQORRRZ ROMPNQQQ[ RSQTOUNWMZM\\N]O^R^[ R\\O]R]Z RZM[N\\Q\\[ RC[K[ RN[V[ RY[a[ RDMFN REMFO RFZD[ RFYE[ RHYI[ RHZJ[ RQZO[ RQYP[ RSYT[ RSZU[ R\\ZZ[ R\\Y[[ R^Y_[ R^Z`[";prog_char	gRowmanTri_6E[]	PROGMEM	=	"65G^LML[ RMNMZ RIMNMN[ RNQOOPNRMUMWNXOYRY[ RWOXRXZ RUMVNWQW[ RI[Q[ RT[\\[ RJMLN RKMLO RLZJ[ RLYK[ RNYO[ RNZP[ RWZU[ RWYV[ RYYZ[ RYZ[[";prog_char	gRowmanTri_6F[]	PROGMEM	=	"46H\\QMNNLPKSKULXNZQ[S[VZXXYUYSXPVNSMQM RMPLRLVMX RWXXVXRWP RQMONNOMRMVNYOZQ[ RS[UZVYWVWRVOUNSM";prog_char	gRowmanTri_70[]	PROGMEM	=	"60G\\LMLb RMNMa RIMNMNb RNPONQMSMVNXPYSYUXXVZS[Q[OZNX RWPXRXVWX RSMUNVOWRWVVYUZS[ RIbQb RJMLN RKMLO RLaJb RL`Kb RN`Ob RNaPb";prog_char	gRowmanTri_71[]	PROGMEM	=	"55H\\VNVb RWOWa RUNWNXMXb RVPUNSMQMNNLPKSKULXNZQ[S[UZVX RMPLRLVMX RQMONNOMRMVNYOZQ[ RSb[b RVaTb RV`Ub RX`Yb RXaZb";prog_char	gRowmanTri_72[]	PROGMEM	=	"43IZNMN[ RONOZ RKMPMP[ RWOWNVNVPXPXNWMUMSNQPPS RK[S[ RLMNN RMMNO RNZL[ RNYM[ RPYQ[ RPZR[";prog_char	gRowmanTri_73[]	PROGMEM	=	"43J[WOXMXQWOVNTMPMNNMOMQNSPTUUWVXY RNNMQ RNRPSUTWU RXVWZ RMONQPRUSWTXVXYWZU[Q[OZNYMWM[NY";prog_char	gRowmanTri_74[]	PROGMEM	=	"22KZPHPVQYRZT[V[XZYX RQHQWRY RPHRFRWSZT[ RMMVM";prog_char	gRowmanTri_75[]	PROGMEM	=	"43G^LMLVMYNZP[S[UZVYWW RMNMWNY RIMNMNWOZP[ RWMW[\\[ RXNXZ RTMYMY[ RJMLN RKMLO RYYZ[ RYZ[[";prog_char	gRowmanTri_76[]	PROGMEM	=	"31I[LMR[ RMMRY RNMSY RXNSYR[ RJMQM RTMZM RKMNO RPMNN RVMXN RYMXN";prog_char	gRowmanTri_77[]	PROGMEM	=	"45F^JMN[ RKMNX RLMOX RRMOXN[ RRMV[ RSMVX RRMTMWX RZNWXV[ RGMOM RWM]M RHMKN RNMLN RXMZN R\\MZN";prog_char	gRowmanTri_78[]	PROGMEM	=	"48H\\LMV[ RMMW[ RNMX[ RWNMZ RJMQM RTMZM RJ[P[ RS[Z[ RKMMN RPMNN RUMWN RYMWN RMZK[ RMZO[ RVZT[ RWZY[";prog_char	gRowmanTri_79[]	PROGMEM	=	"40H[LMR[ RMMRY RNMSY RXNSYP_NaLbJbIaI_K_KaJaJ` RJMQM RTMZM RKMNO RPMNN RVMXN RYMXN";prog_char	gRowmanTri_7A[]	PROGMEM	=	"41I[VML[ RWMM[ RXMN[ RXMLMLQ RL[X[XW RMMLQ RNMLP ROMLO RQMLN RS[XZ RU[XY RV[XX RW[XW";prog_char	gRowmanTri_7B[]	PROGMEM	=	"40KYTBRCQDPFPHQJRKSMSOQQ RRCQEQGRISJTLTNSPORSTTVTXSZR[Q]Q_Ra RQSSUSWRYQZP\\P^Q`RaTb";prog_char	gRowmanTri_7C[]	PROGMEM	=	" 3NVRBRb";prog_char	gRowmanTri_7D[]	PROGMEM	=	"40KYPBRCSDTFTHSJRKQMQOSQ RRCSESGRIQJPLPNQPURQTPVPXQZR[S]S_Ra RSSQUQWRYSZT\\T^S`RaPb";prog_char	gRowmanTri_7E[]	PROGMEM	=	"24F^IUISJPLONOPPTSVTXTZS[Q RISJQLPNPPQTTVUXUZT[Q[O";prog_char	gRowmanTri_7F[]	PROGMEM	=	"30KYQFOGNINKOMQNSNUMVKVIUGSFQF RQFNIOMSNVKUGQF RSFOGNKQNUMVISF";PGM_P gHershyRowmanTriplexFontTable[]	PROGMEM =	   // change "string_table" name to suit{	gRowmanTri_00,	gRowmanTri_20,	gRowmanTri_21,	gRowmanTri_22,	gRowmanTri_23,	gRowmanTri_24,	gRowmanTri_25,	gRowmanTri_26,	gRowmanTri_27,	gRowmanTri_28,	gRowmanTri_29,	gRowmanTri_2A,	gRowmanTri_2B,	gRowmanTri_2C,	gRowmanTri_2D,	gRowmanTri_2E,	gRowmanTri_2F,	gRowmanTri_30,	gRowmanTri_31,	gRowmanTri_32,	gRowmanTri_33,	gRowmanTri_34,	gRowmanTri_35,	gRowmanTri_36,	gRowmanTri_37,	gRowmanTri_38,	gRowmanTri_39,	gRowmanTri_3A,	gRowmanTri_3B,	gRowmanTri_3C,	gRowmanTri_3D,	gRowmanTri_3E,	gRowmanTri_3F,	gRowmanTri_40,	gRowmanTri_41,	gRowmanTri_42,	gRowmanTri_43,	gRowmanTri_44,	gRowmanTri_45,	gRowmanTri_46,	gRowmanTri_47,	gRowmanTri_48,	gRowmanTri_49,	gRowmanTri_4A,	gRowmanTri_4B,	gRowmanTri_4C,	gRowmanTri_4D,	gRowmanTri_4E,	gRowmanTri_4F,	gRowmanTri_50,	gRowmanTri_51,	gRowmanTri_52,	gRowmanTri_53,	gRowmanTri_54,	gRowmanTri_55,	gRowmanTri_56,	gRowmanTri_57,	gRowmanTri_58,	gRowmanTri_59,	gRowmanTri_5A,	gRowmanTri_5B,	gRowmanTri_5C,	gRowmanTri_5D,	gRowmanTri_5E,	gRowmanTri_5F,	gRowmanTri_60,	gRowmanTri_61,	gRowmanTri_62,	gRowmanTri_63,	gRowmanTri_64,	gRowmanTri_65,	gRowmanTri_66,	gRowmanTri_67,	gRowmanTri_68,	gRowmanTri_69,	gRowmanTri_6A,	gRowmanTri_6B,	gRowmanTri_6C,	gRowmanTri_6D,	gRowmanTri_6E,	gRowmanTri_6F,	gRowmanTri_70,	gRowmanTri_71,	gRowmanTri_72,	gRowmanTri_73,	gRowmanTri_74,	gRowmanTri_75,	gRowmanTri_76,	gRowmanTri_77,	gRowmanTri_78,	gRowmanTri_79,	gRowmanTri_7A,	gRowmanTri_7B,	gRowmanTri_7C,	gRowmanTri_7D,	gRowmanTri_7E,	gRowmanTri_7F};