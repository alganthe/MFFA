            class I_rr_mot
            {
                name ="Motorized groups";
                class I_rr_mot_g_s
                {
                    name="Motorized squad (12 men)";
                    side=2;
                    faction="I_rr";
                    class Unit0
                    {
						side=2;
						vehicle="I_rr_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
                    class Unit1
                    {
                        side=2;
                        vehicle="I_rr_Ural_c_F";
                        rank="PRIVATE";
                        position[]={0,-10,0};
                    };
                    class Unit2
					{
						side=2;
						vehicle="I_rr_medic_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_rr_mg_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit4
					{
						side=2;
						vehicle="I_rr_amg_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit5
					{
						side=2;
						vehicle="I_rr_lat_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
                    class Unit6
                    {
                        side=2;
                        vehicle="I_rr_m_F";
                        rank="PRIVATE";
                        position[]={20,-20,0};
                    };
                    class Unit7
                    {
                        side=2;
                        vehicle="I_rr_gl_F";
                        rank="PRIVATE";
                        position[]={-20,-20,0};
                    };
                    class Unit8
                    {
                        side=2;
                        vehicle="I_rr_soldier_F";
                        rank="PRIVATE";
                        position[]={25,-25,0};
                    };
                    class Unit9
                    {
                        side=2;
                        vehicle="I_rr_soldier_F";
                        rank="PRIVATE";
                        position[]={-25,-25,0};
                    };
                    class Unit10
                    {
                        side=2
                        vehicle="I_rr_soldier_F";
                        rank="PRIVATE";
                        position[]={30,-30,0};
                    };
                    class Unit11
                    {
                        side=2;
                        vehicle="I_rr_aa_F";
                        rank="PRIVATE";
                        position[]={-30,-30,0};
                    };
                    class Unit12
                    {
                        side=2;
                        vehicle="I_rr_eng_F";
                        rank="PRIVATE";
                        position[]={35,-35,0};
                    };
                    class Unit13
                    {
                        side=2;
                        vehicle="I_rr_exp_F";
                        rank="PRIVATE";
                        position[]={-35,-35,0};
                    };
                };
                class I_rr_mot_g
				{
					name="Motorized Fighter Group";
					side=2;
					faction="I_rr";
					class Unit0
					{
						side=2;
						vehicle="I_rr_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_rr_technical_F";
						rank="CORPORAL";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_rr_m_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_rr_lat_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
                    class Unit4
					{
						side=2;
						vehicle="I_rr_soldier_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
                    class Unit5
					{
						side=2;
						vehicle="I_rr_medic_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};     
				};
				class I_rr_mot_tech
				{
					name="Technicals";
					side=2;
					faction="I_rr";
					class Unit0
					{
						side=2;
						vehicle="I_rr_technical_a_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_rr_technical_a_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_rr_technical_a_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
                };
            };