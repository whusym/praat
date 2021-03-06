# test_angle_between_planes
# djmw 20041021, 20070820 

printline test_angle_between_planes.praat

for i to 200
	 hoek = randomUniform (0.001, 90)
 	 nrow = randomInteger (10,1000)
 	 call test hoek nrow 3
endfor

printline test_angle_between_planes.praat OK

procedure test degrees nrow ncol
	  idt1 = Create TableOfReal... t nrow ncol
	  Formula... if col=1 then randomGauss(0,10) else self endif
	  Formula... if col=2 then randomGauss(0,5) else self endif
	  Formula... if col=3 then randomGauss(0,2.5) else self endif
 	# Centering is very important
	  Centre columns
	 c = To Configuration
	 Rotate (pc)
	  idt2 = To TableOfReal
	pc1 = To PCA
 	 select c
 	# The rotation is in the pc-coordinates frame
  	Rotate... 1 3 degrees
 	 idt3 =  To TableOfReal
	pc2 = To PCA
 	 plus pc1
	  degrees_found = Get angle between pc1-pc2 planes
 	 assert abs(degrees-degrees_found) < 2e-6; 'nrow' 'degrees' 'degrees_found'
	 # printline 'nrow' 'degrees' 'degrees_found'

 	removeObject: idt1, idt2, idt3, pc1, pc2, c
endproc


