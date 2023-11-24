import React, { useEffect } from 'react'
import GlobalApi from '../services/GlobalApi'

function MovieList({generId}) {

  useEffect(()=>{
    getMoviesByGenerId();
  },[])

     const getMoviesByGenerId=()=>{
        GlobalApi.getMoviesByGenerId(generId).then((resp)=>{
            console.log(resp.data.results)
        })
     }

  return (
    <div>MovieList</div>
  )
}

export default MovieList