# firmware-hls : HLS implementation of the hybrid L1 track firmware

[![pipeline status](https://gitlab.cern.ch/rglein/firmware-hls/badges/feat_CI/pipeline.svg)](https://gitlab.cern.ch/rglein/firmware-hls/commits/feat_CI)

## Repo directory contents:

- TrackletAlgorithm/ : Algo source code.
- project/ : .tcl scripts to create HLS project, compile & run code. 
- TestBenches/ : test bench code
- emData/ : .dat files with input/output test-bench data (corresponding to memory between algo steps) + .tab files of data for LUTs used internally by algos.

An HLS project can be generated by running tcl file with Vivado HLS in firmware-hls/project/ directory. e.g. To do so for the ProjectionRouter:

        vivado_hls -f script_PR.tcl

This would create a project directory \<project> ("projrouter" in case of the above example). The project name is defined in the tcl script. To open the project in GUI:

        vivado_hls -p <project>

## Format of emData/ files.

### .dat files (test bench input/output data)

These have test data corresponding to the contents of the memories between algo steps. Their data format is explained 
in https://twiki.cern.ch/twiki/bin/view/CMS/HybridDataFormat . 

e.g. AllStubs*.dat contains one row per stub: "stub_number stub_coords_(binary)[r|z|phi|...] ditto_but_in_hex"; StubPairs*.dat contains one row per stub pair "pair_number stub_index_in_allstubs_mem_(binary)[innerLayer|outerLayer] ditto_but_in_hex.

File naming convention: "L3" or "D5" indicate barrel or disk number; "PHIC" indicates 3rd course phi division given layer of nonant.

Some of the files are large, so not stored directly in git. You should download them from CERNbox with emData/TC/download.sh etc.

### .tab files 

These correspond to LUT used internally by the algo steps.

## Corresponding C++ emulation

The C++ emulation was used to create the files in the emData/, (setting cfg params writememlinks=writemem=true).

The HLS doesn't correspond to the latest C++ emulation, but to an older version in the following repo:

https://github.com/cms-tracklet/fpga_emulation_longVM/tree/fw_synch, specifically this tag:
https://github.com/cms-tracklet/fpga_emulation_longVM/tree/ZT_181203

See readme in that area. The emulation repository is dependent on imath, which should be checked out with this tag:
https://github.com/cms-tracklet/imath/tree/AH_181201

The correct versions of imath and fpga_emulation_longVM can be checked out and built with the following commands:

        git clone https://github.com/cms-tracklet/imath.git
        git clone https://github.com/cms-tracklet/fpga_emulation_longVM.git
        cd imath/
        git checkout AH_181201
        make -j5
        cd ../fpga_emulation_longVM/
        git checkout AH_190930
        make fpga
