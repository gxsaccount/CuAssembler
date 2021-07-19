
import sys 
sys.path.append("/home/gaoxiang/data/CuAssembler")

from CuAsm.CubinFile import CubinFile
binname = sys.argv[1]
cf = CubinFile(binname)
asmname = binname.replace('.cubin', '.cuasm')
cf.saveAsCuAsm(asmname)
