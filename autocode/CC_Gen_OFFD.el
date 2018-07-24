-- Generated automatically by - PROOSIS - 3.8.1 


USE LPRES VERSION "1.3.5"


-- EL code of the schematic.
-- The COMPONENT definition lines are blocked for edition.
-- You can edit the parameters clicking over them.

COMPONENT CC_Gen_OFFD 

TOPOLOGY
   LPRES.Injector(
      Type = Off_design	-- Non default value.
   ) Injector_O(
      C_D = 0.5,
      A = 0.674779514,	-- Non default value.
      W = 100)

   LPRES.ThrustMonitor ThrustMonitor

   LPRES.Inlet(
      Type = Unknown_W	-- Non default value.
   ) Inlet_1(
      Tt = 288.15,
      pt = 101325,
      W = 1,
      fluid = LH2	-- Non default value.
   )

   LPRES.Inlet(
      Type = Unknown_W	-- Non default value.
   ) Inlet_2(
      Tt = 288.15,
      pt = 101325,
      W = 1,
      fluid = LOX)

   LPRES.CombCha(
      Type = Off_design,	-- Non default value.
      Cooled = No) CombCha_1_1(
      eta_d = 0.9,
      OF_st = 8,
      Q_comb = 2000000,
      cp_P = 4182,
      M_P = 32,
      AR = 10,
      A_th = 5.05402805,	-- Non default value.
      p_c = 50000,	-- Non default value.
      AR_r = 10 / 2,
      A_wet = 1,
      Zone = Divergent,
      p_c0 = 5000000,
      T_c0 = 4000,
      W_F0 = 1000,
      M_oxid = 31.9988,
      M_fuel = 2.01594,
      T_ch = 337.260438,	-- Non default value.
      rho_ch = 0.0542461307,	-- Non default value.
      mfr_ch = 200,	-- Non default value.
      temp_ch = 0.032)

   LPRES.Injector(
      Type = Off_design	-- Non default value.
   ) Injector_F_1(
      C_D = 0.5,
      A = 1.58985935,	-- Non default value.
      W = 100)

   LPRES.Inlet(
      Type = Unknown_W	-- Non default value.
   ) LH2_circuit_1(
      Tt = 288.15,
      pt = 101325,
      W = 1,
      fluid = H2	-- Non default value.
   )

   LPRES.GasGen(
      Type = Off_design) GasGen_1(
      eta_d = 0.9,
      OF_st = 8,
      Q_comb = 2000000,
      cp_P = 4182,
      M_P = 32,
      p_c = 5000000,
      p_c0 = 5000000,
      T_c0 = 4000,
      W_F0 = 1000,
      M_oxid = 31.9988,
      M_fuel = 2.01594,
      T_ch = 573.376125,	-- Non default value.
      rho_ch = 0.612141482,	-- Non default value.
      mfr_ch = 100,	-- Non default value.
      temp_ch = 0.032)

   CONNECT LH2_circuit_1.f TO Injector_F_1.f_in
   CONNECT Injector_F_1.f_out TO CombCha_1_1.f_F
   CONNECT Injector_O.f_out TO CombCha_1_1.f_O
   CONNECT CombCha_1_1.g TO ThrustMonitor.g
   CONNECT Inlet_2.f TO GasGen_1.f_O
   CONNECT Inlet_1.f TO GasGen_1.f_F
   CONNECT GasGen_1.g TO Injector_O.f_in

END COMPONENT