teaches_subject(jatin_majithia,odemvc).
teaches_subject(dattatray_ghaytadak,odemvc).
teaches_subject(shrida_kalamkar,dsa-1).
teaches_subject(ashmini_matange,dsa-1).
teaches_subject(vaibhav_khatavkar,ppl).
teaches_subject(sumit_hirve,ppl).
teaches_subject(Deepak_Kshirsagar,dtl).
teaches_subject(Jagruti_Waykole,dld).
teaches_subject(shalaka_deshpande,plevh).
teaches_subject(kshipra_moghe,plevh).
teaches_subject(manoj_soman,ic).
teaches_subject(prakash_apte,ic).
teaches_subject(sandeep_hanwate,fcs).
 
has_subject(comp_dept,odemvc).
has_subject(comp_dept,dsa-1).
has_subject(comp_dept,ppl).
has_subject(comp_dept,dtl).
has_subject(comp_dept,dld).
has_subject(comp_dept,plevh).
has_subject(comp_dept,ic).
has_subject(comp_dept,fcs).
 
has_student(comp_dept,Ram).
has_student(comp_dept,Sham).
has_student(comp_dept,Dnyanu).
has_student(comp_dept,Paru).
has_student(comp_dept,Teju).
has_student(comp_dept,Monya).
has_student(comp_dept,Sonya).
has_student(comp_dept,munna).
has_student(comp_dept,gopya).
has_student(comp_dept,chintu).

has_faculty(DEPARTMENT,FACULTY) :- teaches_subject(FACULTY,SUBJECT) , has_subject(DEPARTMENT,SUBJECT).
studies_subject(STUDENT,SUBJECT) :- has_student(DEPARTMENT,STUDENT) , has_subject(DEPARTMENT,SUBJECT).
studies_under(STUDENT,FACULTY) :- has_subject(DEPARTMENT,SUBJECT) , has_student(DEPARTMENT,STUDENT) , teaches_subject(FACULTY,SUBJECT).
